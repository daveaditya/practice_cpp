//Program to convert temperature from Fahrenheit to Celcius
#include<iostream>

using namespace std;

int main(int argc,char ** argv) {
	//Enter your code here
	float F,C;
	cout << "Enter the temperatue in Fahrenheit : ";
	cin >> F;
	C=(5*(F-32))/9;
	cout << endl << "The temperature in Celcius is " << C;
	return(0);
}
