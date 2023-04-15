//Program to print pattern using FOR loop
#include<iostream>

using namespace std;

int main(int argc,char ** argv) {
	//Enter your code here
	int no;
	cout << "Enter the number of lines : ";
	cin >> no;
	for(int i=1;i<=no;i++) {
		for(int j=1;j<=i;j++) {
			cout << i;
		}
		cout << endl;
	}
	return(0);
}
