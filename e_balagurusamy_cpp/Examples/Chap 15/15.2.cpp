//Modifying String Objects.
#include<iostream>
#include<string>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	string s1("12345");
	string s2("abcde");

	cout << "Original strings are: " << endl;
	cout << "S1= " << s1 << endl;
	cout << "S2= " << s2 << endl << endl;

	cout << "Place S2 inside S1" << endl;
	s1.insert(4,s2);
	cout << "Modified S1: " << s1 << endl << endl;

	cout << "Remove 5 characters from S1" << endl;
	s1.erase(4,5);
	cout << "Now S1: " << s1 << endl << endl;

	cout << "Replace Middle 3 characters in S2 with S1" << endl;
	s2.replace(1,3,s1);
	cout << "Now S2: " << s2 << endl;
	return(0);
}
