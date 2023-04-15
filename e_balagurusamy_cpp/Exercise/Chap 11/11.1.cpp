/*
 * Write a program that reads a text file and creates another file that is identical except that
 * every sequence of consecutive blank spaces is replaced by a single space.
 */
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	char c;
	ofstream output("file1.txt");
	cout << "Enter a string: ";
	cin.get(c);
	while(c!='\n') {
		output.put(c);
		cin.get(c);
	}
	output.close();
	ifstream input1("file1.txt");
	ofstream output2("file2.txt");
	int sp_count=0;
	while(input1) {
		input1.get(c);
		if(c==' ') {
			sp_count++;
		}
		if(sp_count<=1 || c!=' ') {
			output2.put(c);
		}
		if(c!=' ') {
			sp_count=0;
		}
	}
	input1.close();
	output2.close();
	cout << "\nContents of new file: ";
	ifstream input("file2.txt");
	input.get(c);
	while(input) {
		cout << c;
		input.get(c);
	}
	input.close();
	return(0);
}
