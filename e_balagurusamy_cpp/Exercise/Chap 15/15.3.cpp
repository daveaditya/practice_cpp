//Write a program that reads several city names from the keyboard and
//displays only those names
//beginning with characters "B" or "C".
#include<iostream>
#include<string>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	string cities[]={"Ahmedabad", "Bombay", "Calcutta", "Surat", "Badlapur"};
	for(int i=0;i<5;i++) {
		if(cities[i][0]=='B' || cities[i][0]=='C') {
			cout << cities[i] << endl;
		}
	}
	return(0);
}
