/*
 * Write a program that will create a data file containing the list of
 * telephone numbers
 * given in 11.2. Use class object to store each set of data.
 */
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class telephoneDiary {
	private:
		char *name;
		int phoneNumber;
	public:
		static int objectsInMemory;
		static int objectsInFile;
		telephoneDiary(void);
		telephoneDiary(char *n,int num);
		telephoneDiary(telephoneDiary &temp);
		~telephoneDiary();
		static void countObjects(int last);
		void insert(char *n,int num);
		void display(void);
};

telephoneDiary :: telephoneDiary(void) {
	name=new char[0];
	phoneNumber=0;
	objectsInMemory++;
}

telephoneDiary :: telephoneDiary(char *n,int num) {
	int length=strlen(n);
	name=new char[length];
	name=n;
	phoneNumber=num;
	objectsInMemory++;
}

telephoneDiary :: telephoneDiary(telephoneDiary &temp) {
	int length=strlen(temp.name);
	name=new char[length];
	name=temp.name;
	phoneNumber=temp.phoneNumber;
	objectsInMemory++;
}

telephoneDiary :: ~telephoneDiary() {
	objectsInMemory--;
	cout << "Name destructor" << endl;
}

void telephoneDiary :: insert(char *n,int num) {
	int length=strlen(n);
	name=new char[length];
	name=n;
	phoneNumber=num;
}

void telephoneDiary :: display(void) {
	cout << "\nName: " << name << endl;
	cout << "Phone Number: " << phoneNumber << endl;
}

void telephoneDiary :: countObjects(int last) {
	telephoneDiary::objectsInFile=last/sizeof(telephoneDiary);
}

void storeInFile(telephoneDiary &temp) {
	ofstream output;
	output.open("TelephoneDiary.txt",ios::app);
	output.write((char *)&temp,sizeof(temp));
	telephoneDiary::countObjects(output.tellp());
	output.close();
}

void readFromFile(void) {
	ifstream input;
	telephoneDiary numbers;
	input.open("TelephoneDiary.txt");
	input.seekg(0);
	for(int i=0;i<telephoneDiary::objectsInFile;i++) {
		input.read((char *)&numbers,sizeof(numbers));
		numbers.display();
	}
	input.close();
}

int telephoneDiary :: objectsInFile=0;
int telephoneDiary :: objectsInMemory=0;

int main(int argc,char ** argv) {
	//Your code here
	telephoneDiary first((char *)"Aditya",132456);
	first.display();
	telephoneDiary second((char *)"Ram",524811);
	second.display();
	storeInFile(first);
	storeInFile(second);
	cout << "\nRead from file";
	cout << endl << endl;
	readFromFile();
	ifstream input("TelephoneDiary.txt");
	telephoneDiary *fromFile=new telephoneDiary[telephoneDiary::objectsInFile];
	for(int i=0;i<telephoneDiary::objectsInFile;i++) {
		input.read((char *)&fromFile[i],sizeof(telephoneDiary));
	}
	cout << endl << "Objects from file" << endl;
	for(int i=0;i<telephoneDiary::objectsInFile;i++) {
		fromFile[i].display();
	}
	input.close();
	return(0);
}
