//Program to compute area of a triangle and a circle by overloading the area() function.
#include<iostream>
#define PI 3.14
using namespace std;

double area(double r);
double area(double h,double b);

int main(int argc,char ** argv) {
	//Your code here
	cout << "Area of circle with r=10 is " << area(10.0) << endl ;
	cout << "Area of triangle with h=5, and b=6 is " << area(5.0,6.0) << endl ;
	return(0);
}

double area(double r) {
	return(PI*r*r);
}

double area(double h,double b) {
	return((h*b)/2);
}
