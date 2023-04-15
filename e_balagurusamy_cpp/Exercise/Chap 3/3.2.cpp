//Program to create a vector of user given size M using new operator
#include<iostream>

using namespace std;

int main(int argc,char ** argv) {
	//Enter your code here
	int size;
	cout << "Enter the size of the vector : ";
	cin >> size;
	int *vect = new int[size];
	cout << "Vector created!";
	delete []vect;
	return(0);
}
