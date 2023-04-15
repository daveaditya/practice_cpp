//Use of Friend Function to Add Data Objects of two Different Classes.
#include<iostream>
using namespace std;

class ABC;

class XYZ {
	private:
		int data;
	public:
		void setvalue(int value) {
			data=value;
		}
		friend void add(XYZ,ABC);
};

class ABC {
	private:
		int data;
	public:
		void setvalue(int value) {
			data=value;
		}
		friend void add(XYZ,ABC);
};

void add(XYZ obj1,ABC obj2) {
	cout << "Sum of data values of XYZ and ABC objects using friend funciton = " << obj1.data+obj2.data;
}

int main(int argc,char ** argv) {
	//Your code here
	XYZ X;
	ABC A;
	X.setvalue(5);
	A.setvalue(50);
	add(X,A);
	return(0);
}
