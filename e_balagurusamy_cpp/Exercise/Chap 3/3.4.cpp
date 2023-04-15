//Program to implement investment equation.
#include<iostream>

using namespace std;

class invest {
		int Principal, no;
		float rate;
	public :
		void set(int P,int n,float r);
		float value();
};

void invest :: set(int P,int n,float r) {
	Principal=P;
	no=n;
	rate=r;
}

float invest :: value() {
	float V;
	cout << "\nPrincipal \tRate \tNo. \tValue" << endl << endl;
	for(int i=1;i<=no;i++) {
		V=Principal*(1+rate);
		cout << Principal << "\t\t" << rate << " " << "\t" << i << "\t" << V << endl;
		Principal=V;
	}
	return(V);
}

int main(int argc,char ** argv) {
	//Enter your code here
	invest temp;
	int P,no;
	float r,V;
	cout << "Enter the principal amount : ";
	cin >> P;
	cout << endl << "Enter the no of years : ";
	cin >> no;
	cout << endl << "Enter the rate of interest : ";
	cin >> r;
	temp.set(P,no,r);
	V=temp.value();
	cout << endl << "The value at the end is " << V;
	return(0);
}
