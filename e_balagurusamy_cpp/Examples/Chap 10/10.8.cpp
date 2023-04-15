//Manipulation of Flag and Bit Fields.
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int num;
	cout << "Enter an integer number: ";
	cin >> num;
	cout << "The hexadecimal, octal and decimal representation of " << num << " is: ";
	cout.setf(ios::hex,ios::basefield);
	cout << num << ", ";
	cout.setf(ios::oct,ios::basefield);
	cout << num << " , and ";
	cout.setf(ios::dec,ios::basefield);
	cout << num << " respectively" << endl;
	return(0);
}
