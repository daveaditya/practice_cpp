//Program to using power function with operator overloading to accept m as integer.
#include<iostream>
using namespace std;

double power(double m,int n=2);
int power(int m,int n=2);

int main(int argc,char ** argv) {
	//Your code here
	cout << "2.3 ^ 2 = " << power(2.3) << endl ;
	cout << "3 ^ 4 = " << power(3,4) << endl ;
	return(0);
}

double power(double m, int n) {
	double result=1;
	for(int i=1;i<=n;i++) {
		result=result*m;
	}
	return(result);
}

int power(int m,int n) {
	int result=1;
	for(int i=1;i<=n;i++) {
		result=result*m;
	}
	return(result);
}
