//Width and Precision Manipulators
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	float pi=22.0/7.0;
	cout << "Value of PI: " << endl;
	for(int i=1;i<=10;i++) {
		cout.width(i+1);
		cout.precision(i);
		cout << pi << endl;
	}
	return(0);
}
