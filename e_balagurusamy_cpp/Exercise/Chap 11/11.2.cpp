/*
 * A file contains a list of telephone numbers in the following form:
 *
 * John		23456
 * Ahmed	9876
 * ...		...
 *
 * The names contian only one word and the names and telephone numbers are separateed
 * by white spaces. Write a program to read the file and output the list in two columns.
 * The names should be left-justified and the numbers right-justified.
 */
#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

int readName(int offset,char *name);
int readNumber(int offset,int& num);
int countLine(void);
void readFile(int lines);

int main(int argc,char ** argv) {
	//Your code here
	readFile(countLine());
	return(0);
}

int readName(int offset,char *name) {
	ifstream input;
	input.open("Telephone.txt");
	input.seekg(offset,ios::beg);
	int i=0;
	char c;
	while(input.get(c)) {
		if(input.eof() || c==' ') {
			break;
		}
		name[i]=c;
		i++;
	}
	name[i]='\0';
	input.close();
	return(i);
}

int readNumber(int offset,int& num) {
	ifstream input;
	input.open("Telephone.txt");
	input.seekg(offset,ios::beg);
	int i=0;
	char c;
	num=0;
	while(input.get(c)) {
		if(input.eof()) {
			break;
		}
		if(c=='\n') {
			break;
		}
		i++;
		num=(num*10)+(int(c)-'0');
	}
	input.close();
	return(i);
}

int countLine(void) {
	ifstream input;
	input.open("Telephone.txt");
	input.seekg(0,ios::beg);
	char c;
	int count=0;
	while(!input.eof()) {
		input.get(c);
		if(c=='\n') {
			count++;
		}
	}
	input.close();
	return(count);
}

void readFile(int lines) {
	char name[7]="ABCDFG";
	int number=0;
	int newOffset=0;
	int i=0;
	while(i<=lines) {
		i++;
		newOffset=newOffset+readName(newOffset,name);
		cout.width(10);
		cout.setf(ios::left,ios::adjustfield);
		cout << name;
		newOffset=newOffset+readNumber(newOffset+1,number);
		cout.width(7);
		cout.setf(ios::right,ios::adjustfield);
		cout << number << endl;
		newOffset+=2;
	}
}
