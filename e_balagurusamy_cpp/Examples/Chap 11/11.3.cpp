//Reading from Two Files Simultaneuosly.
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	const int SIZE=80;
	char line[SIZE];
	ifstream fin1,fin2;
	fin1.open("country");
	fin2.open("capital");
	for(int i=0;i<=10;i++) {
		if(fin1.eof()!=0) {
			cout << "Exit from country" << endl;
			exit(1);
		}
		else {
		fin1.getline(line,SIZE);
		cout << "Capital of " << line;
		}
		if(fin2.eof()!=0) {
			cout << "Exit from capital\n";
			exit(1);
		}
		else {
		fin2.getline(line,SIZE);
		cout << line << endl;
		}
	}
	return(0);
}
