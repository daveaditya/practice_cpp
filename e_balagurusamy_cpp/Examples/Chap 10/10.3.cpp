//Display strings with write().
#include<iostream>
#include<cstring>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	char *string1="C++ ";
	char *string2="Programming";
	int m=strlen(string1);
	int n=strlen(string2);
	cout << "str1= " << (int)&string1 << " str2= " << (int)&string2;
	for(int i=1;i<n;i++) {
		cout.write(string2,i) << endl;
	}
	for(int i=n;i>0;i--) {
		cout.write(string2,i) << endl;
	}
	cout.write(string1,m).write(string2,n) << endl;
	cout.write(string1,10);
	return(0);
}
