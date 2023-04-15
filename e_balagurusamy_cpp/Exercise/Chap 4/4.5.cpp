//Write a macro that obtains the largest of three numbers.
#include<iostream>
#define largest(x,y,z) (x>y && x>z)? cout << "x is largest" : ((y>z)? cout << "y is largest" : cout << "z is largest" )
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	largest(120,20,30);
	return(0);
}
