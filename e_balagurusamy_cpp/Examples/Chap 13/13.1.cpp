//Try Block Throwing an Exception.
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int a,b;
	cout << "Enter values of a and b" << endl;
	cin >> a;
	cin >> b;
	int x=a-b;
	try {
		if(x!=0) {
			cout << "Result(a/x)= " << a/x << endl;
		}
		else {
			throw(x);
		}
	}
	catch(int i) {
		cout << "Exception caught: DIVIDE BY ZERO" << endl;
	}
	cout << "END" << endl;
	return(0);
}
