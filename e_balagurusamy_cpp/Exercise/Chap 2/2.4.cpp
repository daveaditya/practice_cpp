//Program to find result of x=a/b-c using inserted values
#include<iostream>

using namespace std;

int main(int argc,char ** argv) {
	//Enter your code here
	int x,a,b,c;
	cout << "Enter the value of a : ";
	cin >> a;
	cout << endl << "Enter the value of b : ";
	cin >> b;
	cout << endl << "Enter the value of c : ";
	cin >> c;
	x=a/b-c;
	cout << endl << "x = a / b -c EQUALS " << x;
	return(0);
}
