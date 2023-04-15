/*
 * Define two classes Polar and Rectangle to represent points in the polar and retangle systems.
 * Use conversion routines to convert from one system to the other.
 */
#include<iostream>
#include<cmath>
using namespace std;

class Rectangle;

class Polar {
	private:
		float angle;
		float radius;
	public:
		Polar();
		Polar(double a,double b);
		void insert(float a,float b);
		void display(void);
		operator Rectangle();
};

class Rectangle {
	private:
		float x;
		float y;
	public:
		Rectangle();
		Rectangle(double a,double b);
		void insert(float a,float b);
		void display(void);
		operator Polar();
};

Rectangle :: Rectangle() {
	x=y=0;
}

Rectangle :: Rectangle(double a,double b) {
	x=a;
	y=b;
}

void Rectangle :: insert(float a,float b) {
	x=a;
	y=b;
}

void Rectangle :: display(void) {
	cout << "x: " << x << " and y: " << y << endl;
}

Rectangle :: operator Polar() {
	cout << "\nRectangle to Polar" << endl;
	return(Polar(tan(y/x),sqrt(x*x + y*y)));
}

Polar :: Polar() {
	angle=radius=0;
}

Polar :: Polar(double a,double b) {
	angle=a;
	radius=b;
}

void Polar :: insert(float a,float b) {
	radius=a;
	angle=b;
}

void Polar :: display(void) {
	cout << "Angle: " << angle << " and Radius: " << radius << endl;
}

Polar :: operator Rectangle() {
	cout << "\nPolar to rectangle" << endl;
	return( Rectangle(angle*cos(radius) , angle*sin(radius) ));
}

int main(int argc,char ** argv) {
	//Your code here
	Polar A;
	cout << "\nPolar A" << endl;
	A.insert(5,15);
	A.display();
	Rectangle B;
	cout << "\nRectangle B" << endl;
	B.insert(5,12);
	B.display();
	cout << "\nConvert Polar A to Rectangle" << endl;
	Rectangle temp;
	temp=Rectangle(A);
	temp.display();
	cout << "\nConvert Rectangle B to Polar" << endl;
	Polar temp1=B;
	temp1.display();
	return(0);
}
