/*
 * An educational institution wishes to maintain a database of its employees. The database is divided
 * into a number of classes whose hierarchical relationships are shown in figure. The figure also shows
 * the minimum information required for each class. Specify all the classes anf define functions to
 * create the database and retrieve individual information as and when required.
 *
 * staff(code, name) --> teacher(subject, publication), typist(speed), of office(grade)
 * typist --> regular( ), casual(daily, wages)
 *
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

class teacher : public staff{
	private:

	protected:
		char *subject;
		char *publication;
	public:
		teacher();
		teacher(char *n,int c,char *sub,char *pub);
		~teacher();
		void display(void);

};

teacher :: teacher() : staff() {
	subject=NULL;
	publication=NULL;
}

teacher :: teacher(char *n,int c,char *sub,char *pub) : staff(n,c) {
	subject=sub;
	publication=pub;
}

teacher :: ~teacher() {
	cout << "\nTeacher destructor";
}

void teacher :: display(void) {
	staff::display();
	cout << "Subject: " << subject << endl;
	cout << "Publication: " << publication << endl;
}

class typist : public staff{
	private:

	protected:
		int speed;
	public:
		typist();
		typist(char *n,int c,int sp);
		~typist();
		void display(void);
};

typist :: typist() : staff() {
	speed=0;
}

typist :: typist(char *n,int c,int sp) : staff(n,c) {
	speed=sp;
}

typist :: ~typist() {
	cout << "\nTypist destructor";
}

void typist :: display(void) {
	staff::display();
	cout << "Speed: " << speed << endl;
}

class officer : public staff {
	private:
		char *grade;
	protected:

	public:
		officer();
		officer(char *n,int c,char *grd);
		~officer();
		void display(void);
};

officer :: officer() : staff() {
	grade=NULL;
}

officer :: officer(char *n,int c,char *grd) : staff(n,c) {
	grade=grd;
}

officer :: ~officer() {
	cout << "\nOfficer destructor";
}

void officer :: display(void) {
	staff::display();
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
