//Write a program to demonstrate the concept of rethrowing an exception.
#include<iostream>
using namespace std;

void test(int a) {
	try {
		if(a==0) {
			throw(1);
		}
		else {
			throw('x');
		}
	}
	catch(int) {
		cout << "Rethrowing" << endl;
		throw;
	}
	catch(char) {
		cout << "No rethrowing" << endl;
	}
}

int main(int argc,char ** argv) {
	//Your code here
	try {
		test(4);
		test(0);
	}
	catch(...) {
		cout << "Caught rethrow." << endl;
	}
	return(0);
}
