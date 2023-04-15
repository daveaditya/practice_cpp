//Define a namespace named Constants that contains declarations of some constants.
//Write a program that uses the constants defined in the namespace Constants.
#include<iostream>
using namespace std;

namespace CONSTANTS {
	int alpha=10;
	int beta=20;
	int gama=30;
}

using namespace CONSTANTS;

int main(int argc,char ** argv) {
	//Your code here
	cout << "Alpha = " << CONSTANTS::alpha << endl
			<< "Beta = " << beta << endl
			<< "Gama = " << gama << endl;
	return(0);
}
