/*
 * Create two classes DM and DB which store the value of distances. DM stores the distances in
 * metres and centimetres and DB in feet and inches. Write a program that can read the values
 * for the class objects and add one object of DM with another object of DB.
 *
 * Use a friend fucntion to carry out the addition operation. The object that stores the
 * results may be a DM object or DB object, depending on the units in which the results are
 * required.
 *
 * The display should be in the format of feet and inches or metres and centimetres depending
 * on the object on display.
 */
#include<iostream>
using namespace std;

class DM;

class DB {
	private:
		float feet, inch;
	public:
		DB();
		void getdata(float f,float i);
		void display();
		friend DB addDB(DB &a,DM &b);
		friend DM addDM(DB &a,DM &b);
};

class DM {
	private:
		float m,cm;
	public:
		DM();
		void getdata(float m,float c);
		void display();
		friend DM addDM(DB &a,DM &b);
		friend DB addDB(DB &a,DM &b);
};

DB :: DB() {
	cout << "Default constructor. DB." << endl ;
	feet=0;
	inch=0;
}

void DB :: getdata(float f,float i) {
	feet=f;
	inch=i;
}

void DB :: display() {
	cout << "\nValues are : " << feet << " feet"<< " and " << inch << " inch" << endl ;
}

DM :: DM() {
	cout << "Default constructor. DM." << endl ;
	m=0;
	cm=0;
}

void DM :: getdata(float m,float c) {
	DM::m=m;
	cm=c;
}

void DM :: display() {
	cout << "\nValues are : " << m << " metre" << " and " << cm << " cm." << endl ;
}

DB addDB(DB &a,DM &b) {
	DB c;
	b.m=(b.m/3.0);
	b.cm=(b.cm/0.03);
	c.feet=a.feet+b.m;
	c.inch=a.inch+b.cm;
	return(c);
}

DM addDM(DB &a,DM &b) {
	DM c;
	a.feet=(a.feet/3.0);
	a.inch=(a.inch/0.02);
	c.m=a.feet+b.m;
	c.cm=a.inch+b.cm;
	return(c);
}

int main(int argc,char ** argv) {
	//Your code here
	DB A;
	cout << "DB Object A" << endl ;
	A.getdata(5,12);
	A.display();
	DM B;
	cout << "\nDM Object B" << endl ;
	B.getdata(8,10);
	B.display();
	cout << "\nAddition" << endl ;
	DB c;
	c=addDB(A,B);
	c.display();
	DM d;
	d=addDM(A,B);
	d.display();
	return(0);
}
