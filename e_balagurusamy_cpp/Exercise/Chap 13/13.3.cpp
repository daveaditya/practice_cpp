//Write a program which uses catch(...) handler.
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	try {
		if(ch>='A' && ch<='Z') {
			throw(1);
		}
		else if(ch>='a' && ch<='z') {
			throw(1.0);
		}
		else if(ch>='0' && ch<='9') {
			throw('n');
		}
		else {
			throw("s");
		}
	}
	catch(int) {
		cout << "\nCapital letter entered!" << endl;
	}
	catch(double) {
		cout << "\nSmall letter entered!"  << endl;
	}
	catch(char) {
		cout << "\nNumber entered!" << endl;
	}
	catch(...) {
		cout << "\nSomething else entered" << endl;
	}
	return(0);
}
