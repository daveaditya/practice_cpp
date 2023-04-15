//Array of Pointers.
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int i=0;
	char *ptr[10] = {"books","television","comuter","sports"};
	char str[25];
	cout << "Enter your favourite leisure pursuit: " ;
	cin >> str;
	for(int i=0;i<4;i++) {
		if(!strcmp((const char *)str,(const char *)*ptr[i])) {
			cout << "You favourite pursuit is available here" << endl;
			break;
		}
	}
	if(i==4) {
		cout << "Your favourite pursuit isnot available here" << endl;
	}
	return(0);
}
