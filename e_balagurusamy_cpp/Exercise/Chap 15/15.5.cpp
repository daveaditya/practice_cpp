//Write a program that counts the number of occurences of a
//particular character,
//say 'e', in a line of text.
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	string text;
	int count=0;
	cout << "Enter a text: ";
	getline(cin,text);
	string :: iterator it;
	for(it=text.begin();it!=text.end();it++) {
		if((*it)=='e' || (*it)=='E') {
			count++;
		}
	}
	cout << "The occurences of e are " << count << " times." << endl;
	return(0);
}
