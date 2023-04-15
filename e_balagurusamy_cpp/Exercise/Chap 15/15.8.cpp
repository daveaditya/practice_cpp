//Write a program that reads a list of countries in random order and
//displays them in
//alphabetical order. Use comparison operators and functions.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	string countries[]={"India","China","Japan","Italy","New Jersey"};
	int size=sizeof(countries)/sizeof(countries[0]);
	sort(countries,countries+size);
	for(int i=0;i<5;i++) {
		cout << countries[i] << endl;
	}
	return(0);
}
