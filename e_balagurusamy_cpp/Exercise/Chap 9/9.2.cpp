/*
 * Extend the program 9.1 to display the area of circles. This requires addition of new derived class
 * 'circle' that computes the area of a circle. Remember, for a circle we need only one value,
 * is radius, but the get_data() function in the base class requires two values to be passed.
 * (Here make the second arguemnt of get_data() funciton as a default one with zero value.)
 */
#include<iostream>
using namespace std;

const int PI=3.14;

class shape {
	private:

	protected:
		double x;
		double y;
	public:
		shape();
		shape(double radius);
		shape(double a,double b);
		virtual ~shape();
		void get_data(double a,double b);
		void get_data(double radius);
		virtual void display_area(void);
};

shape :: shape() {
	x=0;
	y=0;
}

shape :: shape(double radius) {
	x=radius;
	y=0;
}

shape :: shape(double a,double b) {
	x=a;
	y=b;
}

shape :: ~shape() {
	cout << "Shape destructor" << endl;
}

void shape :: get_data(double a,double b) {
	x=a;
	y=b;
}

void shape :: get_data(double radius) {
	x=radius;
	y=0;
}

void shape :: display_area(void) {
	cout << "Display inside shape." << endl;
}

class triangle : public shape{
	private:

	protected:
		double area;
	public:
		triangle();
		triangle(double base,double altitude);
		virtual ~triangle();
		void display_area(void);
};

triangle :: triangle() : shape() {
	area=0;
}

triangle :: triangle(double base,double altitude) : shape(base,altitude) {
	area=0;
}

triangle :: ~triangle() {
	cout << "\nTriangle destructor" << endl;
}

void triangle :: display_area(void) {
	area=(1/2.0)*x*y;
	cout << "The area of triangle with base " << x << " and altitude " << y << " is " << area << endl;
}

class rectangle : public shape{
	private:

	protected:
		double area;
	public:
		rectangle();
		rectangle(double len,double breadth);
		virtual ~rectangle();
		void display_area(void);
};

rectangle :: rectangle() : shape() {
	area=0;
}

rectangle :: rectangle(double len,double breadth) : shape(len,breadth) {
	area=0;
}

rectangle :: ~rectangle() {
	cout << "\nRectangle destructor" << endl;
}

void rectangle :: display_area(void) {
	area=x*y;
	cout << "The area of rectangle with length " << x << " and breath " << y << " is " << area << endl;
}

class circle : public shape {
	private:

	protected:
		double area;
	public:
		circle();
		circle(double radius);
		virtual ~circle();
		void display_area(void);
};

circle :: circle() {
	x=0;
	y=0;
	area=0;
}

circle :: circle(double radius) : shape(radius) {
	area=0;
}

circle :: ~circle() {
	cout << "\nCircle destructor" << endl;
}

void circle :: display_area(void) {
	area=PI*x*x;
	cout << "The area of circle with radius " << x << " is " << area << endl;
}

int main(int argc,char ** argv) {
	//Your code here
	cout << "Triangle Object" << endl;
	triangle T1;
	T1.get_data(20,30);
	T1.display_area();

	cout << "\n\nRectangle Object" << endl;
	rectangle R1;
	R1.get_data(10,10);
	R1.display_area();

	cout << "\n\nCircle Object" << endl;
	circle C1;
	C1.get_data(10);
	C1.display_area();

	return(0);
}
