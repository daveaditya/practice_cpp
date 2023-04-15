//Write a program that demonstrates how certain exception types are not allowed
//to be thrown
#include<iostream>
using namespace std;

void test(int a) throw(char) {
	if(a==0) {
		throw(1.0);
	}
	else {
		throw(1);
	}
}

int main(int argc,char ** argv) {
	//Your code here
	try {
		test(0);
		test(3);
	}
	catch(double) {
		cout << "a=0" << endl;
	}
	catch(...) {
		cout << "Other" << endl;
	}
	return(0);
}
