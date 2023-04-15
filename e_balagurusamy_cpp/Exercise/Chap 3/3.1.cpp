//Functiion to swap values using reference
#include<iostream>

using namespace std;

void SWAP(int &a,int &b);

int main(int argc,char ** argv) {
	//Enter your code here
	int x,y;
	cout << "Enter two numbers : ";
	cin >> x >> y;
	cout << "You entered x = " << x << " and y = " << y;
	SWAP(x,y);
	cout << endl << "After SWAP function x = " << x << " and y = " << y;
	return(0);
}

void SWAP(int &a,int &b) {
	int temp;
	temp=b;
	b=a;
	a=temp;
}
