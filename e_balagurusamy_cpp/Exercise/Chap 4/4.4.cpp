//Programt to achieve default argument using overloading.
#include<iostream>
using namespace std;

void nodef(int a) {
	int b=5;
	cout << "a= " << a << " b= " << b << endl;
}

void nodef(int a,int b) {
	cout << "a= " << a << " b= " << b << endl;
}

int main(int argc,char ** argv) {
	//Your code here
	nodef(10,20);
	nodef(10);
	nodef(10,30);
	return(0);
}

