/*
 * Define a class String. Use overloaded == operator to compare two strings.
 */
#include<iostream>
#include<cstring>
using namespace std;

class String {
	private:
		int len;
		char *str;
	public:
		void insert(const char *s);
		void display(void);
		int operator ==(String &temp);
};

void String :: insert(const char *s) {
	len=strlen(s);
	str=new char[len+1];
	strcpy(str,s);
}

void String :: display(void) {
	cout << "The string is : " << str;
}

int String :: operator ==(String &temp) {
	int FLAG=0;
	for(int i=0;i<=len;i++) {
		if(str[i]!=temp.str[i]) {
			FLAG=1;
			break;
		}
	}
	return(FLAG);
}

int main(int argc,char ** argv) {
	//Your code here
	String S1,S2;
	S1.insert("Hello");
	S2.insert("Hello");
	cout << "Object A" << endl;
	S1.display();
	cout << "\n\nObject B" << endl;
	S2.display();
	if(S1==S2) {
		cout << "\n\nString not same." << endl;
	}
	else {
		cout << "\n\nString same." << endl;
	}
	return(0);
}
