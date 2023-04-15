//I/O Operations on Characters
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	char string[80];
	cout << "Enter a string: ";
	cin >> string;
	int len=strlen(string);
	fstream file;
	cout << "\nOpening the 'TEXT' file and storing the string in it." << endl << endl;
	file.open("TEXT",ios::in | ios::out);
	for(int i=0;i<len;i++) {
		file.put(string[i]);
	}
	file.seekg(0);
	char ch;
	cout << "Reading the file contents: ";
	while(file) {
		file.get(ch);
		cout << ch;
	}
	return(0);
}
