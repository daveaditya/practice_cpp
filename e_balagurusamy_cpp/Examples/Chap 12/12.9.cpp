//Template function with Explicit Function.
#include<iostream>
using namespace std;

template<class T>
void display(T x) {
	cout << "Overloaded Template display 1: " << x << endl;
}

template<class T,class T1>
void display(T x,T1 y) {
	cout << "Overloaded Template Display 2: " << x  << " , " << y << endl;
}

void display(int x) {
	cout << "Explicit display: " << x << endl;
}

int main(int argc,char ** argv) {
	//Your code here
	display(100);
	display(12.34);
	display(100,12.34);
	display('C');
	return(0);
}
