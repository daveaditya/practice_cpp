//Working with Multiple Files
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	ofstream fout;
	fout.open("country");
	fout << "United States of America" << "\n";
	fout << "United Kingdom" << "\n";
	fout << "South Korea" << "\n";
	fout.close();
	fout.open("capital");
	fout << "Washigton\n";
	fout << "London\n";
	fout << "Seout\n";
	fout.close();

	const int N=80;
	char line[N];
	ifstream fin;
	fin.open("country");
	cout << "contents of country file\n";
	while(fin) {
		fin.getline(line,N);
		cout << line << endl;
	}
	fin.close();
	fin.open("capital");
	cout << "\nContents of capital file" << endl;
	while(fin) {
		fin.getline(line,N);
		cout << line << endl;
	}
	fin.close();
	return(0);
}
