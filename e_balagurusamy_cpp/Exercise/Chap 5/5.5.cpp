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
		void getdata(float f,float i);
		void display();
		friend DB addDB(DB &a,DM &b);
		friend DM addDM(DB &a,DM &b);
};

class DM {
	private:
		float m,cm;
	public:
		void getdata(float m,float c);
		void display();
		friend DM addDM(DB &a,DM &b);
		friend DB addDB(DB &a,DM &b);
};

void DB :: getdata(float f,float i) {
	feet=f;
	inch=i;
}

void DB :: display() {
	cout << "\nValues are : " << feet << " feet"<< " and " << inch << " inch" << endl ;
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
	c.feet=a.feet+(b.m*3.28);
	c.inch=a.inch+(b.cm*0.3937);
	return(c);
}

DM addDM(DB &a,DM &b) {
	DM c;
	c.m=(a.feet*0.3048)+b.m;
	c.cm=(a.inch*2.54)+b.cm;
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
