/*
 * Write a program that reads the name
 *
 * Martin Luther King
 *
 * from the keyboard into three separate string objects and then concatenates them into
 * a new string object using
 *
 * 1. + operator and
 * 2. append() function.
 *
 */
#include<iostream>
#include<string>

using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	string s1("Martin"),s2(" Luthar"),s3(" King");
	string s4=s1+s2+s3;
	string s5=s1;
	s5.append(s2);
	s5.append(s3);
	cout << "S1 : " << s1 << endl;
	cout << "S2 : " << s2 << endl;
	cout << "S3 : " << s3 << endl;
	cout << "S4 : " << s4 << endl;
	cout << "S5 : " << s5 << endl;
	return(0);
}
