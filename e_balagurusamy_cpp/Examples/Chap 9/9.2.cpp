//Manipulation of Pointers.
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int a=10;
	int *ptr;
	ptr=&a;
	cout << "The value of a is : " << *ptr << endl;
	*ptr=*ptr+a;
	cout << "The revised value of a is : " << a << endl;
	return(0);
}
