//Write a class to represent a vector (a series of float values). Write a program to test your class
/*
 * Include member functions to perform the following tasks:
 * 1. To create the vector
 * 2. To modify the value of a given element,
 * 3. To multiply by a scalar value
 * 4. To display the vector in the form (10, 20, 30, ...)
 * 5. Add two vectors and display the resultant vector.
 */
#include<iostream>
#include<cstdlib>
using namespace std;

class vector {
	private:
		int size;
		float *arr=NULL;
	public:
		vector();
		void create(int s);
		void insert(void);
		void modify(int pos,int value);
		void multiply(int a);
		vector add(vector &a,vector &b);
		void display(void);
};

vector :: vector() {
	cout << "Default constructor." << endl ;
	size=0;
	arr=new float[size];
}

void vector :: create(int s) {
	size=s;
	arr=new float[size];
	if(arr==NULL) {
		cout << endl << "Sufficient memory not available." << endl ;
		exit(1);
	}
	else {
		cout << endl << "Vector creation successful!" << endl ;
	}
}

void vector :: modify(int pos,int value) {
	*(arr+pos-1)=value;
}

void vector :: multiply(int a) {
	for(int i=0;i<size;i++) {
		*(arr+i)=(*(arr+i))*a;
	}
}

void vector :: display(void) {
	cout << "\nValues are: " << endl ;
	for(int i=0;i<size;i++) {
		cout << "  " << *(arr+i);
	}
}

void vector :: insert(void) {
	cout << "Enter values: ";
	for(int i=0;i<size;i++) {
		cin>>*(arr+i);
	}
}

vector vector :: add(vector &a,vector &b) {
	vector c;
	c.create(a.size);
	if(a.size!=b.size) {
		cout << "Addition not possible.";
		for(int i=0;i<size;i++) {
			*(c.arr+i)=0;
		}
		return(c);
	}
	for(int i=0;i<size;i++) {
		*(c.arr+i)=*(a.arr+i)+(*(b.arr+i));
	}
	return(c);
}

int main(int argc,char ** argv) {
	//Your code here
	vector A;
	A.create(5);
	A.insert();
	cout << endl << "Object A";
	A.display();
	vector B;
	B.create(5);
	B.insert();
	cout << endl << "Object B";
	B.display();
	vector C;
	C.create(5);
	cout << endl << "Addition";
	C=C.add(A,B);
	C.display();
	return(0);
}
