/*
 * In Exercise 8.3, the classes teacher, officer and typist are derived fromthe class staff. As we
 * know, we can use container classes in place of inheritance in some situations. Redesign the program
 * of Exercise 8.3 such that the classes teacher, officer, and typist contain the objects of staff.
 */
#include<iostream>
using namespace std;

class staff {
	private:

	protected:
		char *name;
		int code;
	public:
		staff();
		staff(char *n,int c);
		virtual ~staff();
		virtual void display(void);
};

staff :: staff() {
	name=NULL;
	code=0;
}

staff :: staff(char *n,int c) {
	name=n;
	code=c;
}

staff :: ~staff() {
	cout << "\nStaff destructor" << endl;
}

void staff :: display(void) {
	cout << "Staff Details" << endl;
	cout << "Name: " << name << endl;
	cout << "Code: " << code << endl;
}

class teacher{
	private:

	protected:
		char *subject;
		char *publication;
	public:
		staff p1;
		teacher();
		teacher(char *n,int c,char *sub,char *pub);
		~teacher();
		void display(void);

};

teacher :: teacher() : p1() {
	subject=NULL;
	publication=NULL;
}

teacher :: teacher(char *n,int c,char *sub,char *pub) : p1(n,c) {
	subject=sub;
	publication=pub;
}

teacher :: ~teacher() {
	cout << "\nTeacher destructor";
}

void teacher :: display(void) {
	p1.display();
	cout << "Subject: " << subject << endl;
	cout << "Publication: " << publication << endl;
}

class typist {
	private:

	protected:
		int speed;
	public:
		staff p1;
		typist();
		typist(char *n,int c,int sp);
		~typist();
		void display(void);
};

typist :: typist() : p1() {
	speed=0;
}

typist :: typist(char *n,int c,int sp) : p1(n,c) {
	speed=sp;
}

typist :: ~typist() {
	cout << "\nTypist destructor";
}

void typist :: display(void) {
	p1.display();
	cout << "Speed: " << speed << endl;
}

class officer {
	private:
		char *grade;
	protected:

	public:
		staff p1;
		officer();
		officer(char *n,int c,char *grd);
		~officer();
		void display(void);
};

officer :: officer() : p1() {
	grade=NULL;
}

officer :: officer(char *n,int c,char *grd) : p1(n,c) {
	grade=grd;
}

officer :: ~officer() {
	cout << "\nOfficer destructor";
}

void officer :: display(void) {
	p1.display();
	cout << "Grade: " << grade << endl;
}

class regular : virtual public typist {
	private:

	protected:
		float monthly_wages;
	public:
		regular();
		regular(char *n,int c,int sp,float wages);
		~regular();
		void display(void);
};

regular :: regular() : typist() {
	monthly_wages=0;
}

regular :: regular(char *n,int c,int sp,float wages) : typist(n,c,sp) {
	monthly_wages=wages;
}

regular :: ~regular() {
	cout << "\nRegular destructor";
}

void regular :: display(void) {
	typist::display();
	cout << "Monthly Wages: " << monthly_wages << endl;
}

class casual : virtual public typist {
	private:

	protected:
		float daily_wages;
	public:
		casual();
		casual(char *n,int c,int sp,float wages);
		~casual();
		void display(void);
};

casual :: casual() : typist() {
	daily_wages=0;
}

casual :: casual(char *n,int c,int sp,float wages) : typist(n,c,sp) {
	daily_wages=wages;
}

casual :: ~casual() {
	cout << "\nCasual destructor";
}

void casual :: display(void) {
	typist::display();
	cout << "Daily Wages: " << daily_wages << endl;
}

int main(int argc,char ** argv) {
	//Your code here

	cout << "Teacher 1" << endl;
	teacher t1((char *)"ABC",111,(char *)"Maths",(char *)"GK");
	t1.display();

	cout << "\nTypist 1" << endl;
	typist ty1((char *)"NMK",222,30);
	ty1.display();

	cout << "\nOfficer 1" << endl;
	officer o1((char *)"KHJ",333,(char *)"A+");
	o1.display();

	cout << "\nRegular Typist 1" << endl;
	regular r1((char *)"MOT",444,10,3000);
	r1.display();

	cout << "\nCasual Typist 1" << endl;
	casual c1((char *)"TPO",555,32,100);
	c1.display();

	return(0);
}
