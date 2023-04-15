/*
 * Write a program with the following:
 *
 * 1. A function to read two double type numbers from keyboard.
 * 2. A function to calculate the division of these two numbers.
 * 3. A try block to throw an exception when a wrong type of data is keyed in.
 * 4. A try to detect and throw an exception if the condition 'divide-by-zero' occurs.
 * 5. Appropricate catch block to handle the exceptions thrown.
 */
#include<iostream>
using namespace std;

void read(double &a,double &b) {
	int err=1;
	cout << "Enter a and b:";
	if(!(cin >> a >> b)) {
		throw(err);
	}
}

void division(double a,double b) {
	int err=1;
	try {
		if(b==0) {
			throw(err);
		}
		else {
			cout << "Division is : " << a/b;
		}
	}
	catch(int err) {
		cout << "DIVIDE BY ZERO" << endl;
	}
}

int main(int argc,char ** argv) {
	//Your code here
	double a,b;
	try {
		read(a,b);
	}
	catch(int err) {
		cout << "Wrong input!" << endl;
	}
	division(a,b);
	return(0);
}
