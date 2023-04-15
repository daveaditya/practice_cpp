//write a program to demonstrate the use of reinterpret_cast operator.
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int a=10;
	float b=20.35;
	int *int_ptr;
//	float *float_ptr;
//	cout << "Value of int_ptr= " << *int_ptr << " and float_ptr= " << *float_ptr;
	int_ptr=*reinterpret_cast<int *> (&b);
//	float_ptr=reinterpret_cast<float *> (b);
	cout << "Value of int_ptr= " << *int_ptr;// << " and float_ptr= " << *float_ptr;
	return(0);
}
