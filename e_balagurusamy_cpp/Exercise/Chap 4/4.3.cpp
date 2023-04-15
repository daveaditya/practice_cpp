//Program to write a function to read and display a matrix of size mxn from the keyboard, also make the row argument as default argument.
#include<iostream>
#include<iomanip>
using namespace std;

void matrix_in(int arr[][10],int col,int row=5) {
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			cout << "Enter value: ";
			cin >> arr[i][j];
		}
	}
}

void matrix_out(int arr[][10],int col,int row=5) {
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			cout << setw(3) << arr[i][j];
		}
		cout << endl;
	}
}

int main(int argc,char ** argv) {
	//Your code here
	int col;
	cout << "Enter size of row, and column : ";
	cin >> col;
	int arr[10][10];
	matrix_in(arr,col);
	cout << "The matrix is: " << endl;
	matrix_out(arr,col);
	return(0);
}


