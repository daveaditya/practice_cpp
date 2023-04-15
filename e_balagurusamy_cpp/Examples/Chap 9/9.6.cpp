//Searching a substring within a main string.
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int i,j;
	char str[]="\nC++ is better than C";
	int len=strlen(str);
	char *substr=new char[len];
	cout << "The main string is : " << str << endl;
	cout << "Enter the substring to be searched : ";
	cin >> substr;
	int k,len2=strlen(substr);
	for(i=0;i<len;i++) {
		k=i;
		for(j=0;j<len2;j++) {
			if(str[k]==substr[j]) {
				if(j==len2-1) {
					cout << "The substring is present in the main string." << endl;
					exit(0);
				}
				k++;
			}
			else {
				break;
			}
		}
	}
	if(i==len) {
		cout << "\nThe substring is not present in the main string";
	}
	return(0);
}
