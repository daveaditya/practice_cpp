//Funciton Overloading.
#include<iostream>
using namespace std;

int area(int);
int area(int,int);
float area(float);

int main(int argc,char ** argv) {
	//Your code here

	cout << "Calling the area() funciton for computing the area of a square (side=5) - " << area(5) << "\n";
	cout << "Calling the area() function for computing the area of a rectangle (length=5,breadth=10 - " << area(5,10) << "\n";
	cout << "Calling the area() function for computing the area of a circle (radius=5.5) - " << area(float(5.5));
	return(0);
}

int area(int side) {
	return(side*side);
}

int area(int length,int breadth) {
	return(length*breadth);
}

float area(float radius) {
	return(3.14*radius*radius);
}
