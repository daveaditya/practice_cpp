//Program to demonstrate unary operator overloading.
#include<iostream>
using namespace std;

class ABC {
	private:
		int a;
	public:
		ABC();
		~ABC();
		void insert(int x);
		void display();
		void operator ++();
		void operator ++(int);
};

ABC :: ABC() {
	a=0;
}

ABC :: ~ABC() {
	cout << "Destructor" << endl ;
}

void ABC :: insert(int x) {
	a=x;
}

void ABC :: display() {
	cout << "Value is a= " << a << endl ;
}

void ABC :: operator ++() {
	++a;
}

void ABC :: operator ++(int) {
	++(*this);
}

int main(int argc,char ** argv) {
	//Your code here
	cout << "Object A" << endl ;
	ABC A;
	A.insert(10);
	A.display();
	cout << "Operator Overloading" << endl ;
	A++;
	A.display();
	return(0);
}


/*

OUTPUT

Object A
Value is a= 10
Operator Overloading
Value is a= 11
Destructor

*/
