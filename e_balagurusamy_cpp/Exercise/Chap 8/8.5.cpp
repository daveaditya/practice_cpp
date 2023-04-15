/*
 * Consider a class network of Figure. The class master derives information from both account and admin classes
 * which in turn derive information from the class person. Define all the four classes and write a program to
 * create, update and display the information contained in master objects.
 *
 * master <-- account(pay),admin(experience) <-- person(name, code)
 */
#include<iostream>
using namespace std;

class person {
	private:

	protected:
		char *name;
		int code;
	public:
		person();
		person(char *n,int c);
		virtual ~person();
		virtual void display(void);
};

person :: person() {
	name=NULL;
	code=0;
}

person :: person(char *n,int c) {
	name=n;
	code=c;
}

person :: ~person() {
	cout << "\nPerson destructor" << endl;
}

void person :: display(void) {
	cout << "Details" << endl;
	cout << "Name: " << name << endl;
	cout << "Code: " << code << endl;
}

class account : virtual public person {
	private:

	protected:
		float pay;
	public:
		account();
		account(char *n,int c,float p);
		~account();
		void display(void);
};

account :: account() {
	person();
	pay=0;
}

account :: account(char *n,int c,float p) {
	person(n,c);
	pay=p;
}

account :: ~account() {
	cout << "\nAccount destructor";
}

void account :: display() {
	person::display();
	cout << "Pay: " << pay << endl;
}

class admin : virtual public person {
	private:

	protected:
		float experience;
	public:
		admin();
		admin(char *n,int c,float exp);
		~admin();
		void display(void);
};

admin :: admin() {
	person();
	experience=0;
}

admin :: admin(char *n,int c,float exp) {
	person(n,c);
	experience=exp;
}

admin :: ~admin() {
	cout << "\nAdmin destructor";
}

void admin :: display(void) {
	person::display();
	cout << "Experience: " << experience << endl;
}

class master : public account,public admin {
	private:

	protected:

	public:
		master();
		master(char *n,int c,float exp,float p);
		~master();
		void display(void);
};

master :: master() : account(),admin() {

}

master :: master(char *n,int c,float exp,float p) {
	name=n;
	code=c;
	experience=exp;
	pay=p;
}

master :: ~master() {
	cout << "\n\nMaster destructor";
}

void master :: display(void) {
	account::display();
	cout << "Experience: " << experience;
}

int main(int argc,char ** argv) {
	//Your code here
	cout << "Master Object" << endl;
	master m1((char *)"ABC",111,9,30000);
	m1.display();
	return(0);
}
