//Using Functions in Namespace Scope.
#include<iostream>
using namespace std;

namespace Functions {
	int divide(int x,int y) {
		return(x/y);
	}
	int prod(int x,int y);
}

int Functions :: prod(int x,int y) {
	return(x*y);
}

int main(int argc,char ** argv) {
	//Your code here
	using namespace Functions;

	cout << "Division: " << divide(20,10) << endl;
	cout << "Multiplication: " << prod(20,10);

	return(0);
}
