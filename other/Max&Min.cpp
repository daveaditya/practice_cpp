//Write a program to enter number till the user wants and then display the maximum and minnimum
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	int no=0,max=0,min=0;
	while(no!=-99) {
		cout << "Enter a nuumber [ENTER -99 TO END INPUT] : ";
		cin >> no;
		if (max < no) {
			max=no;
		}
		if(min > no && no!=-99) {
			min=no;
		}
	}
	cout << "\nThe maximum number is " << max << " and minimum number is " << min;
	return(0);
}
