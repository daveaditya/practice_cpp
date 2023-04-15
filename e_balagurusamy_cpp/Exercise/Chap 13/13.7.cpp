//Write a main program that calls a deeply nested funciton containing an exception.
//Incorporate necessary exception handling mechanism.
#include<iostream>
using namespace std;

void test1(void);
void test2(void);
void test3(void);

int main(int argc,char ** argv) {
	//Your code here
	try {
		test1();
	}
	catch(...) {
		cout << "Exception in main" << endl;
	}
	return(0);
}


void test1(void) {
	try {
		test2();
	}
	catch(...) {
		cout << "Exception in test 1" << endl;
		throw;
	}
}

void test2(void) {
	try {
		test3();
	}
	catch(...) {
		cout << "Exception in test 2" << endl;
		throw;
	}
}

void test3(void) {
	int err=1;
	double a,b;
	cout << "Enter a and b: ";
	cin >> a >> b;
	try {
		if(b==0) {
			throw(err);
		}
		else {
			cout << "Division : " << a/b;
		}
	}
	catch(int err) {
		cout << "Exception in test 3" << endl;
		throw;
	}
}
