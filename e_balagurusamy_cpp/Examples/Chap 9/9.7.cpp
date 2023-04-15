//Pointer to Functions
#include<iostream>
using namespace std;

typedef void (*FunPtr)(int,int);

void Add(int i,int j) {
	cout << i << " + " << j << " = " << i+j << endl;
}

void Subtract(int i,int j) {
	cout << i << " - " << j << " = " << i-j << endl;
}

int main(int argc,char ** argv) {
	//Your code here
	FunPtr ptr;
	ptr=&Add;
	ptr(1,2);
	ptr=&Subtract;
	ptr(3,2);
	cout << "Trial" << endl;
	void (*fun)(int,int) = &Subtract;
	fun(5,1);
	return(0);
}
