//Write a program that will read a line of text containing more than
//three words and then replace
//all then blank spaces with an underscore(_).
#include<iostream>
#include<string>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	char str[20];
	string text;
	cout << "Enter a text: ";
	cin.getline(str,20);
	text=str;
	string :: iterator it;
	for(it=text.begin();it!=text.end();it++) {
		if((*it)==' ') {
			*it='_';
		}
	}
	cout << "\nNew String is :" << endl;
	cout << text;
	return(0);
}
