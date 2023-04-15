/*
 * Write a program to find the value of e int he following series:
 *
 * e=1+1/1!+1/2!+... upto accuracy=0.0001
 */
#include<iostream>
#include<cmath>
using namespace std;

const int acc=0.0001;

double fact(int a) {
	if(a==1) {
		return(1.0);
	}
	return(a*fact(a-1));
}

double exponent(void) {
	double previous=1,result=1;
	int i=1;
	while(1) {
		result=result+1/fact(i);
		i++;
		if(fabs(result-previous)<=acc) {
			return(result);
		}
		previous=result;
	}
}



int main(int argc,char ** argv) {
	//Your code here
	cout << "The value of e is: " << exponent();
	return(0);
}
