//Testing Throw Restrictions.
#include<iostream>
using namespace std;

void test(int x) throw(int,char,double) {
	if(x==0) {
		throw('a');
	}
	else if(x==1) {
		throw(x);
	}
	else if(x==-1) {
		throw(1.0);
	}
	cout << "End of function block";
}

int main(int argc,char ** argv) {
	//Your code here
	try {
		cout << "Testing Throw Restrictions" << endl;
		cout << "X==0" << endl;
		test(0);
		cout << "X==1" << endl;
		test(1);
		cout << "X==-1" << endl;
		test(-1);
		cout << "X==2" << endl;
		test(2);
	}
	catch(char c) {
		cout << "Caught a character" << endl;
	}
	catch(int m) {
		cout << "Caught an integer" << endl;
	}
	catch(double d) {
		cout << "Caught a double" << endl;
	}
	cout << "End of try-catch system" << endl << endl;
	return(0);
}
