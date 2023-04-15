//Function with Twop Generic Types.
#include<iostream>
using namespace std;

template<class T1,class T2>
void display(T1 x,T2 y) {
	cout << x << " " << y << endl;
}

int main(int argc,char ** argv) {
	//Your code here
	cout << "Calling function template with int and character string type parameters...\n";
	display(1999,"EBG");
	cout << "Calling fucntion template with float and integer type parameter...\n";
	display(12.34,1234);
	return(0);
}
