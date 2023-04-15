//Write a program containing a possible exception. Use a try block to throw it
//and a catch block to handle it properly.
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int num,den;
	cout << "\nEnter numerator: ";
	cin >> num;
	cout << "\nEnter denominator: ";
	cin >> den;
	try {
		if(den==0) {
			throw(0);
		}
		else {
			double result=num/float(den);
			cout << "Division is: " << result << endl;
		}
	}
	catch(int) {
		cout << "Divide by Zero Exception" << endl;
	}
	return(0);
}
