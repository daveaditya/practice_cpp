//Creating String Objects.
#include<iostream>
#include<string>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	string s1;
	string s2("New");
	string s3(" Delhi");

	s1=s2;
	cout << "S1= " <<s1 << endl;

	s1="Standard C++";
	cout << "Now S1= " << s1 << endl;

	string s4(s1);
	cout << "S4= " << s4 << endl << endl;

	cout << "Enter a string: ";
	cin >> s4;
	cout << "Now S4= " << s4 << endl << endl;

	s1=s2+s3;
	cout << "S1 finally contains: " << s1 << endl;
	return(0);
}
