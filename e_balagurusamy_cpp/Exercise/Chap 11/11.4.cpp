/*
 * Wrtie an interactive , menu-driven program that will access the file created
 * in 11.3 and implement
 * the following tasks:
 *
 * 1. Determine the telephone number of the specified person.
 * 2. Determine the name if a telephone number if known.
 * 3. Update the telephone number, whenever there is a change.
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
		friend int updateNumber(char *n,int newNumber);
		friend int find(int num,char *name);
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
	cout << "\nName destructor" << endl;
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

int updateNumber(char *name,int newNumber) {
	fstream inoutput;
	inoutput.open("TelephoneDiary.txt",ios::in | ios::out);
	inoutput.seekg(0);
	telephoneDiary temp;
	int PRESENT=0,i;
	for(i=0;i<telephoneDiary::objectsInFile;i++) {
		inoutput.read((char *)&temp,sizeof(telephoneDiary));
		if(temp.name==name) {
			PRESENT=1;
			break;
		}
	}
	if(PRESENT==1) {
		int location=i*sizeof(telephoneDiary);
		temp.insert(name,newNumber);
		inoutput.seekp(location,ios::beg);
		inoutput.write((char *)&temp,sizeof(temp));
		cout << "Updated Successfully...";
		inoutput.close();
		return(0);
	}
	else {
		inoutput.close();
		return(-1);
	}
}

int find(int num=111,char *name=(char *)"AAA") {
	ifstream input("TelephoneDiary.txt");
	telephoneDiary temp;
	int PRESENT=0,i;
	for(i=0;i<telephoneDiary::objectsInFile;i++) {
		input.read((char *)&temp,sizeof(telephoneDiary));
		if(temp.name==name || temp.phoneNumber==num) {
			PRESENT=1;
			break;
		}
	}
	input.close();
	if(PRESENT==1) {
		cout << "Contact present" << endl;
		temp.display();
		cout << endl;
		return(0);
	}
	else {
		return(-1);
	}
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
//	ifstream input("TelephoneDiary.txt");
//	telephoneDiary *fromFile=new telephoneDiary[telephoneDiary::objectsInFile];
//	for(int i=0;i<telephoneDiary::objectsInFile;i++) {
//		input.read((char *)&fromFile[i],sizeof(telephoneDiary));
//	}
//	cout << endl << "Objects from file" << endl;
//	for(int i=0;i<telephoneDiary::objectsInFile;i++) {
//		fromFile[i].display();
//	}
//	input.close();
	cout << "Search name" << endl;
	if(find(0,(char *)"Aditya")==-1) {
		cout << "No contact present with such name/number" << endl;
	}
	cout << endl;
	cout << "Search number" << endl;
	if(find(123)==-1) {
		cout << "No contact present with such name/number" << endl;
	}
	cout << endl;
	cout << "Edit ram's number" << endl;
	if(updateNumber((char *)"Ram",147852)==-1) {
		cout << "No contact with such name." << endl;
	}
	cout << endl << "New Updated File Read" << endl;
	readFromFile();
	return(0);
}
