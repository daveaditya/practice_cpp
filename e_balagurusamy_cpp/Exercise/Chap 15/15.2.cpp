//Write a program using an iterator and while() construct to display the contents of a string object.
#include<iostream>
#include<string>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	string s1="Hello World!";
	string :: iterator it=s1.begin();
	while(it!=s1.end()) {
		cout << *it;
		it++;
	}
	return(0);
}
