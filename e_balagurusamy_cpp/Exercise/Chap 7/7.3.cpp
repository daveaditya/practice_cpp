/*
 * Create a class MAT of size m x n. Define all possible matrix operations for MAT type objects.
 */
#include<iostream>
using namespace std;

class MAT {
	private:
		int m;
		int n;
		int err;
		float **matrix;
	public:
		void create(int a,int b);
		void insert(void);
		void display(void);
		operator int(void);
		MAT operator +(MAT B);
		MAT operator -(MAT B);
		MAT operator *(MAT B);
		MAT friend operator *(MAT temp,float A);
		MAT friend operator /(MAT temp,float A);
		MAT operator ~(void);
};

void MAT :: create(int a,int b) {
	m=a;
	n=b;
	matrix=new float *[m];
	for(int i=0;i<m;i++) {
		matrix[i]=new float[n];
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			matrix[i][j]=0;
		}
	}
}

void MAT :: insert(void) {
	cout << "Enter the elements: ";
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cin >> matrix[i][j];
		}
	}
}

void MAT :: display(void) {
	cout << "\nEntered elements are: " << endl;
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cout << "   " << matrix[i][j];
		}
		cout << endl;
	}
}

MAT MAT :: operator +(MAT B) {
	MAT temp;
	if(m!=B.m || n!=B.n) {
		temp.err=0;
		return(temp);
	}
	else {

		temp.create(m,n);
		for(int i=0;i<m;i++) {
			for(int j=0;j<n;j++) {
				temp.matrix[i][j]=matrix[i][j]+B.matrix[i][j];
			}
		}
		return(temp);
	}
}

MAT MAT :: operator -(MAT B) {
	MAT temp;
	if(m!=B.m || n!=B.n) {
		err=0;
		return(temp);
	}
	else {
		temp.create(m,n);
		for(int i=0;i<m;i++) {
			for(int j=0;j<n;j++) {
				temp.matrix[i][j]=matrix[i][j]-B.matrix[i][j];
			}
		}
		return(temp);
	}
}

MAT MAT :: operator *(MAT B) {
	MAT t;
	if(n!=B.m) {
		err=0;
		return(t);
	}
	else {
		t.create(n,B.n);
		float sum=0;
		for(int i=0;i<m;i++) {
			for(int j=0;j<B.n;j++) {
				for(int k=0;k<B.m;k++) {
					sum=sum+matrix[i][k]*B.matrix[k][j];
				}
				t.matrix[i][j]=sum;
				sum=0;
			}
		}
		return(t);
	}
}

MAT operator *(MAT temp,float A) {
	MAT t;
	t.create(temp.m,temp.n);
	for(int i=0;i<temp.m;i++) {
		for(int j=0;j<temp.n;j++) {
			t.matrix[i][j]=temp.matrix[i][j]*A;
		}
	}
	return(t);
}

MAT operator /(MAT temp,float A) {
	MAT t;
	if(A==0) {
		t.err=0;
		return(t);
	}
	t.create(temp.m,temp.n);
	for(int i=0;i<temp.m;i++) {
		for(int j=0;j<temp.n;j++) {
			t.matrix[i][j]=temp.matrix[i][j]/A;
		}
	}
	return(t);
}

MAT MAT :: operator ~() {
	MAT t;
	t.create(n,m);
	for(int i=0;i<t.m;i++) {
		for(int j=0;j<t.n;j++) {
			t.matrix[i][j]=matrix[j][i];
		}
	}
	return(t);
}

MAT :: operator int(void) {
	return(err);
}

int main(int argc,char ** argv) {
	//Your code here
	MAT A,B,temp;
	A.create(3,3);
	B.create(3,3);
	A.insert();
	B.insert();
	cout << "\nObject A" << endl;
	A.display();
	cout << "\nObject B" << endl;
	B.display();
	cout << "\nAddition" << endl;
	temp=A+B;
	temp.display();
	cout << "\nSubtraction" << endl;
	temp=A-B;
	temp.display();
	cout << "\nMultiplication by matrix" << endl;
	temp=A*B;
	temp.display();
	cout << "\nMultiplication by constant" << endl;
	temp=A*float(10);
	temp.display();
	cout << "\nDivision by constant" << endl;
	temp=A/float(10);
	temp.display();
	cout << "\nObject C" << endl;
	MAT C;
	C.create(3,3);
	C.insert();
	cout << "\nTranspose" << endl;
	temp=~C;
	temp.display();
	return(0);
}
