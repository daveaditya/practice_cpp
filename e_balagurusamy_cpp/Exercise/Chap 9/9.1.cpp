/*
 * Create a base class called shape. Use this class to store two double type values that could be
 * used to compute the area of figures. Derive two specific classes called triangle and rectangle.
 * from the base shape. Add to the base class, a member function get_data() to initialize base class data
 * members and another member funciton display_area() to compute and display the area of figures.
 * Make display_read() as virtual funciton and redefine this funciotn in the derived classes
 * to suit thier requirements.
 *
 * Using these three classes, design a program that will accept dimensions of a triangle or a rectangle
 * interactively, and display the area.
 *
 * Remember two values given as input will be treated as ;engths of two sides in the case o rectangles, and as base and height in the case of
 * triangles, and used as follows:
 *
 * Area of rectangle=x*y;
 * Area of triangle=1/2*x*y.
 */
#include<iostream>
using namespace std;

class shape {
	private:

	protected:
		double x;
		double y;
	public:
		shape();
		shape(double a,double b);
		virtual ~shape();
		void get_data(double a,double b);
		virtual void display_area(void);
};

shape :: shape() {
	x=0;
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
	return(0);
}
