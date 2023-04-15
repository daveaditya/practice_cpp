//Program to pass 1D array to function.
#include<iostream>
using namespace std;

void one(int array[],int size);

int main(int argc,char ** argv) {
	//Your code here
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	int arr[size];
	one(arr,size);
	for(int i=0;i<size;i++) {
		cout << " " << arr[i];
	}
	return(0);
}

void one(int array[],int size) {
	cout << "Enter number: ";
	for(int i=0;i<size;i++) {
		cin >> array[i];
	}
}
