//Invoking Function that Generates Exception.
#include<iostream>
using namespace std;

void divide(int x,int y,int z) {
	cout << "\nWe are inside the funciton" << endl;
	if((x-y)!=0) {
		int R=z/(x-y);
		cout << "Result= " << R << endl;
	}
	else {
		throw(x-y);
	}
}

int main(int argc,char ** argv) {
	//Your code here
	try {
		cout << "We are inside the try block" << endl;
		divide(10,20,30);
		divide(10,10,20);
	}
	catch(int i) {
		cout << "Caught the exception." << endl;
	}
	return(0);
}
