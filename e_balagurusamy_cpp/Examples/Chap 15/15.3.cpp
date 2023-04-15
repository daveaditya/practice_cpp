//Relational Operations on String Objects.
#include<iostream>
#include<string>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	string s1("ABC");
	string s2("XYZ");
	string s3=s1+s2;

	if(s1!=s2) {
		cout << s1 << " is not equal to " << s2 << endl;
	}
	if(s1>s2) {
		cout << s1 << " is greater than " << s2 << endl;
	}
	else {
		cout << s2 << " greater than " << s1 << endl;
	}
	if(s3==s1+s2) {
		cout << s3 << " is equal to " << s1+s2 << endl << endl;
	}
	int x=s1.compare(s2);
	if(x==0) {
		cout << s1 << " = " << s2 << endl;
	}
	else if(x>0) {
		cout << s1 << " > " << s2 << endl;
	}
	else {
		cout << s1 << " < " << s2 << endl;
	}
	return(0);
}
