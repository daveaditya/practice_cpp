/*
 * The database created in Exercise 8.3 does not include educational information of the staff. It has been decided
 * to add this information to teachers and officers (and not typists) which will help the management in decision
 * making with regard to training, promotion, etc. Add another data class called education that holds teo pieces of
 * educational information, namely, highest qualification in general education adn highest professional
 * qualification. This class should be inherited by the classes teacher and officer. Modify the program of Exercise 8.3
 * to incorporate these additions.
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

class education {
	private:

	protected:
		char *high_general;
		char *high_professional;
	public:
		education();
		education(char *gen,char *pro);
		~education();
		void display(void);
};

education :: education() {
	high_general=NULL;
	high_professional=NULL;
}

education :: education(char *gen,char *pro) {
	high_general=gen;
	high_professional=pro;
}

education :: ~education() {
	cout << "\nEducation destructor";
}

void education :: display(void) {
	cout << "Highest general qualification: " << high_general << endl;
	cout << "Highest professional qualification: " << high_professional << endl;
}

class teacher : public staff, public education{
	private:

	protected:
		char *subject;
		char *publication;
	public:
		teacher();
		teacher(char *n,int c,char *gen,char *pro,char *sub,char *pub);
		~teacher();
		void display(void);

};

teacher :: teacher() : staff(),education() {
	subject=NULL;
	publication=NULL;
}

teacher :: teacher(char *n,int c,char *gen,char *pro,char *sub,char *pub) : staff(n,c),education(gen,pro) {
	subject=sub;
	publication=pub;
}

teacher :: ~teacher() {
	cout << "\nTeacher destructor";
}

void teacher :: display(void) {
	staff::display();
	education::display();
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

class officer : public staff,public education {
	private:
		char *grade;
	protected:

	public:
		officer();
		officer(char *n,int c,char *gen,char *pro,char *grd);
		~officer();
		void display(void);
};

officer :: officer() : staff(),education() {
	grade=NULL;
}

officer :: officer(char *n,int c,char *gen,char *pro,char *grd) : staff(n,c),education(gen,pro) {
	grade=grd;
}

officer :: ~officer() {
	cout << "\nOfficer destructor";
}

void officer :: display(void) {
	staff::display();
	education::display();
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
	teacher t1((char *)"ABC",111,(char *)"B.Com",(char *)"B.Ed",(char *)"Maths",(char *)"GK");
	t1.display();

	cout << "\nTypist 1" << endl;
	typist ty1((char *)"NMK",222,30);
	ty1.display();

	cout << "\nOfficer 1" << endl;
	officer o1((char *)"KHJ",333,(char *)"12th Pass",(char *)"B.B.A",(char *)"A+");
	o1.display();

	cout << "\nRegular Typist 1" << endl;
	regular r1((char *)"MOT",444,10,3000);
	r1.display();

	cout << "\nCasual Typist 1" << endl;
	casual c1((char *)"TPO",555,32,100);
	c1.display();

	return(0);
}
