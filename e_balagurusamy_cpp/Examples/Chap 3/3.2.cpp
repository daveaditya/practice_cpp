//Use of new and delete Operators.
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int *arr;
	int size;

	cout << "Enter the size of the integer array: " ;
	cin >> size ;

	cout << "Creating an array of size " << size << "..." ;
	arr=new int [size];

	cout << "\nDynamic allocation of memory for array arr is successful." ;

	delete arr;

	return(0);
}
