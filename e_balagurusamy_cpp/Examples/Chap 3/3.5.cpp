//Explicit Type Casting.
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int intvar=25;
	float floatvar=35.87;

	cout << "intvar= "  << intvar ;
	cout << "\nfloatvar= " << floatvar;
	cout << "\nfloat(intvar)= " << float(intvar);
	cout << "\nint(floatvar= " << int(floatvar);
	return(0);
}
