//Program to accept two numbers and print the largest
#include<iostream>

using namespace std;

int main(int argc,char ** argv) {
	//Enter your code here
	int a,b;
	cout << "Enter two numbers : ";
	cin >> a >> b;
	(a>b) ? cout << "The largest of two is " << a : cout << "The largest of two is " << b;
	return(0);
}
