//Program to find e^-x
#include<iostream>
#include<cmath>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	float x=0.0,y;
	for(int i=1;i<=10;i++) {
		x=0.0;
		for(int j=1;j<=10;j++) {

			x=x+0.1;
			y=exp(-x);
			cout << "\t" <<  y;

		}
		cout << endl;
		x++;
	}
	return(0);
}
