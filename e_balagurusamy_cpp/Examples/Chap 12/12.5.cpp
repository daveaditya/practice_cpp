//Function Template- An Example.
#include<iostream>
using namespace std;

template<class X>
void nswap(X &a,X &b) {
	X temp=a;
	a=b;
	b=temp;
}

void fun(int m,int n,float a,float b) {
	cout << "m and n before swap: " << m << " and " << n << endl;
	nswap<int>(m,n);
	cout << "m and n after swap: " <<a << " and " << n << endl;
	cout << "a and b before swap: " << a << " and " << b << endl;
	nswap(a,b);
	cout << "a and b after swap: " << a << " and " << b << endl;
}

int main(int argc,char ** argv) {
	//Your code here
	fun(100,200,11.22,33.44);
	return(0);
}
