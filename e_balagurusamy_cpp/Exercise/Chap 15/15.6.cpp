/*
 * Write a program that reads the following text and counts the number of
 * times the word "It"
 * appears in it.
 *
 * It is new. It is singular.
 * It is simple. It must succeed!
 */
#include<iostream>
#include<string>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	string text;
	cout << "Enter a text: ";
	getline(cin,text);
	string :: iterator it;
	int count=0;
	for(it=text.begin();it!=text.end();it++) {
		if((*(it)=='I' || *(it+1)=='i') && (*(it)=='T' || *(it+1)=='t')) {
			count++;
		}
	}
	cout << "No. of \" It \" are " << count << endl;
	return(0);
}
