//Write a class to represent a vector (a series of float values). Write a program to test your class
/*
 * Include member functions to perform the following tasks:
 * 1. To create the vector
 * 2. To modify the value of a given element,
 * 3. To multiply by a scalar value
 * 4. To display the vector in the form (10, 20, 30, ...)
 */
#include<iostream>
#include<cstdlib>
using namespace std;

class vector {
	private:
		int size;
		float *arr=NULL;
	public:
		void create(int s);
		void insert(void);
		void modify(int pos,int value);
		void multiply(int a);
		void display(void);
};

void vector :: create(int s) {
	size=s;
	arr=new float[size];
	if(arr==NULL) {
		cout << "Sufficient memory not available." << endl ;
		exit(1);
	}
	else {
		cout << "Vector creation successful!" << endl ;
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

int main(int argc,char ** argv) {
	//Your code here
	vector A;
	A.create(5);
	A.insert();
	A.display();
	A.modify(3,5);
	A.display();
	A.multiply(2);
	A.display();
	return(0);
}
