/*
 * Create a class FLOAT that conatins one float data member. Overload all the four arithmetic operators
 * so that they operate ont eh objects on FLOAT.
 */
#include<iostream>
using namespace std;

class Float {
	private:
		float a;
	public:
		void putdata(float num);
		void getdata(void);
		operator float(void);
		Float operator +(Float temp);
		Float operator -(Float temp);
		Float operator *(Float temp);
		Float operator /(Float temp);
};

void Float :: getdata(void) {
	cout << "The value is " << a << endl;
}

void Float :: putdata(float num) {
	a=num;
}

Float Float :: operator +(Float temp) {
	Float t;
	t.a=a+temp.a;
	return(t);
}

Float Float :: operator -(Float temp) {
	Float t;
	t.a=a-temp.a;
	return(t);
}

Float Float :: operator *(Float temp) {
	Float t;
	t.a=a*temp.a;
	return(t);
}

Float Float :: operator /(Float temp) {
	Float t;
	if(temp.a==0) {
		t.a=0;
		return(t);
	}
	else {
		t.a=a/temp.a;
		return(t);
	}
}

Float :: operator float(void) {
	return(a);
}

int main(int argc,char ** argv) {
	//Your code here
	Float A,B,temp;
	A.putdata(10);
	B.putdata(20);
	cout << "Object A" << endl;
	A.getdata();
	cout << "Object B" << endl;
	B.getdata();
	cout << "Addition" << endl;
	temp=A+B;
	temp.getdata();
	cout << "Subtraction" << endl;
	temp=A-B;
	temp.getdata();
	cout << "Multiplication" << endl;
	temp=A*B;
	temp.getdata();
	cout << "Division" << endl;
	temp=A/B;
	if(float(temp)!=0) {
		temp.getdata();
	}
	else {
		cout << "Error : Divide by Zero." << endl;
	}
	return(0);
}
