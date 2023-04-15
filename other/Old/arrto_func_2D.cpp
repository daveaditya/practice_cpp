//Program to pass 2D array to function.
#include<iostream.h>

int row,col;

void two(int row,int col,int array[10][10]);

int main(int argc,char ** argv) {
	//Your code here
	int i,j;
	cout << "Enter the number of rows and columns :";
	cin >> row >> col;
	int array[2][10];
	two(row,col,array);
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			cout << " " << array[i][j];
		}
	}
	return(0);
}

void two(int row,int col,int array[10][10]) {
	int i,j;
	cout << "Enter number: ";
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			cin >> array[i][j];
		}
	}
}
