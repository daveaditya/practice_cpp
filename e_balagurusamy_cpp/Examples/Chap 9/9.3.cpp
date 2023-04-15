//Arithmetic Operations on Pointers.
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int num[]={56,75,22,18,90};
	int *ptr;
	cout << "The array values are: " << endl;
	for(int i=0;i<5;i++) {
		cout << num[i] << endl;
	}
	ptr=num;
	cout << "Value of ptr : " << *ptr << endl;
	ptr++;
	cout << "Value of ptr++ : " << *ptr << endl;
	ptr--;
	cout << "Value of ptr-- : " << *ptr << endl;
	ptr=ptr+2;
	cout << "Value of ptr+2 : " << *ptr << endl;
	ptr=ptr-1;
	cout << "Value of ptr-1 : " << *ptr << endl;
	ptr+=3;
	cout << "Value of ptr+=3 : " << *ptr << endl;
	ptr-=2;
	cout << "Value of ptr-=2 : " << *ptr << endl;
	return(0);
}
