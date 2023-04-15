/*
 * Create a student class that includes a student's first_name and his roll_nuber.
 * Create five objects of this class and store them in a list thus creating a phone_lit.
 * Write a program using this list to display the student name if the roll_number is given and vice-versa.
 */
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

class Student {
	private:
		char *name;
		int roll_number;
	public:
		Student();
		Student(char *n,int roll);
		~Student();
		void insert(char *n,int roll);
		void display(void);
		friend int find(list <Student> :: iterator it,char *n);
		friend int find(list <Student> :: iterator it,int roll);
};

Student :: Student() {
	name=NULL;
	roll_number=0;
}

Student :: Student(char *n,int roll) {
	name=n;
	roll_number=roll;
}

Student :: ~Student() {
	cout << "Student desturctor" << endl;
}

void Student :: insert(char *n,int roll) {
	name=n;
	roll_number=roll;
}

void Student :: display(void) {
	cout << "Name: " << name << endl;
	cout << "Roll No.: " << roll_number << endl;
}

int find(list <Student> :: iterator it,char *n) {
	if(it->name==n) {
		return(1);
	}
	else {
		return(0);
	}
}

int find(list <Student> :: iterator it,int roll) {
	if(it->roll_number==roll) {
		return(1);
	}
	else {
		return(0);
	}
}

int main(int argc,char ** argv) {
	//Your code here
	list <Student> std(5);
	list <Student> :: iterator it=std.begin();
	it->insert((char *)"ABC",111);
	it++;
	it->insert((char *)"ETF",222);
	it++;
	it->insert((char *)"UHJ",333);
	it++;
	it->insert((char *)"MNH",444);
	it++;
	it->insert((char *)"VGF",555);
	it++;
	cout << std.size();
	int roll;
	cout << "Entries" << endl << endl;
	for(it=std.begin();it!=std.end();it++) {
		it->display();
	}
	cout << "Enter a student's roll number: ";
	cin >> roll;
	int pre=0;
	for(it=std.begin();it!=std.end();it++) {
		pre=find(it,roll);
	}
	if(pre==1) {
		cout << "Student present" << endl;
	}
	else {
		cout << "Student not found" << endl;
	}
	int pre1=0;
	char name[10];
	cout << "Enter name: ";
	cin >> name;
	for(it=std.begin();it!=std.end();it++) {
		pre1=find(it,name);
	}
	if(pre1==1) {
		cout << "Student present" << endl;
	}
	else {
		cout << "Student not found" << endl;
	}
	return(0);
}
