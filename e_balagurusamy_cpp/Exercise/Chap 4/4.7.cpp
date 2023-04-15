//Write a function power() to raise a number m to a power n. The function takes a double value for m and int value for n, and returns the result correctly. Use a default value of 2 for n to amke the funciton to calculate squares whenthis argument is omitted. Wrtie a main that gets the values of m and n from the user to test the function.
#include<iostream>
using namespace std;

double power(double m,int n=2);

int main(int argc,char ** argv) {
	//Your code here
	double m,result;
	int n;
	cout << "Enter base: ";
	cin >> m;
	cout << "Enter power: ";
	cin >> n;
	if(n==0) {
		result=power(m);
	}
	else {
		result=power(m,n);
	}
	cout << "The answer is: " << result;
	return(0);
}

double power(double m, int n) {
	double result=1;
	for(int i=1;i<=n;i++) {
		result=result*m;
	}
	return(result);
}
