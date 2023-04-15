//Program to implement binary operator overloading.
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
		ABC operator *(ABC &C);
};

ABC :: ABC() {
	cout << "Constructor" << endl ;
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

ABC ABC :: operator *(ABC &C) {
	ABC temp;
	temp.a=a*C.a;
	return(temp);
}

int main(int argc,char ** argv) {
	//Your code here
	cout << "Object A" << endl ;
	ABC A;
	A.insert(10);
	A.display();
	cout << "Object B" << endl ;
	ABC B;
	B.insert(2);
	B.display();
	cout << "Object C" << endl ;
	ABC C;
	cout << "Operator Overloading" << endl ;
	C=A*B;
	C.display();
	return(0);
}


/*

OUTPUT

Object A
Constructor
Value is a= 10
Object B
Constructor
Value is a= 2
Object C
Constructor
Operator Overloading
Constructor
Destructor
Value is a= 20
Destructor
Destructor
Destructor

*/
