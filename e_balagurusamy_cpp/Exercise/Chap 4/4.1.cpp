//Program to write a function to read a matrix of size mxn from the keyboard.
#include<iostream>
#include<iomanip>
using namespace std;

void matrix_in(int arr[][10],int row,int col);

int main(int argc,char ** argv) {
	//Your code here
	int row,col;
	cout << "Enter size of row, and column : ";
	cin >> row >> col;
	int arr[row][10];
	matrix_in(arr,row,col);
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			cout << setw(3) << arr[i][j];
		}
		cout << endl;
	}
	return(0);
}

void matrix_in(int arr[][10],int row,int col) {
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			cout << "Enter value: ";
			cin >> arr[i][j];
		}
	}
}
