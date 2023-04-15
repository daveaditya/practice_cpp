//Program to print the ASCII value of entered character
#include<iostream>

using namespace std;

int main(int argc,char ** argv) {
	//Enter your code here
	char ch;
	cout << "Enter a character : ";
	cin >> ch;
	cout  << endl << "The ASCII value of " << ch << " is " << (int)ch;
	return(0);
}
