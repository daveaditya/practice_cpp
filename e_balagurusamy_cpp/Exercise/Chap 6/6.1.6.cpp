/*
 * With given class write a function that receives two matrix objects as arguments and
 * returns a new matrix object containing their multiplication result.
 */
#include<iostream>
using namespace std;

class matrix {
	private:
		int m[3][3];
	public:
		matrix();
		void read();
		void display();
		friend matrix trans(matrix m1);
		friend matrix multiply(matrix m1,matrix m2);

};

matrix :: matrix() {
	cout << "Default constructor." << endl ;
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			m[i][j]=0;
		}
	}
}

void matrix :: read() {
	cout << "\nEnter the element of the 3x3 matrix: " << endl ;
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			cout << "m[" << i << "]" << "[" << j << "] = " ;
			cin >> m[i][j];
		}
	}
}

void matrix :: display() {
	for(int i=0;i<3;i++) {
		cout << endl ;
		for(int j=0;j<3;j++) {
			cout << m[i][j] << "\t";
		}
	}
}

matrix trans(matrix m1) {
	matrix m2;
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			m2.m[i][j]=m1.m[j][i];
		}
	}
	return(m2);
}

matrix multiply(matrix m1,matrix m2) {
	matrix m3;
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			m3.m[i][j]=0;
			for(int k=0;k<3;k++) {
				m3.m[i][j]=m3.m[i][j]+m1.m[i][k]*m2.m[k][j];
			}
		}
	}
	return(m3);
}

int main(int argc,char ** argv) {
	//Your code here
	matrix mat1,mat2;
	mat1.read();
	cout << "\nYou entered the following matrix: ";
	mat1.display();

	mat2=trans(mat1);
	cout << "\nTransposed matrix: ";
	mat2.display();

	cout << "\nMultiplication";
	matrix mat3;
	mat3=multiply(mat1,mat2);
	mat3.display();

	return(0);
}
