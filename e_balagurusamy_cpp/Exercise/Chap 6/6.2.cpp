/*
 *Define a class String that could work as a user-defined string type. Include constructors that
 *will enable us to create an unintialized string
 *
 *String s1; //String with length 0
 *
 *and also to initialize an object with a string constant at the time of creation like
 *
 *String s2("Well done!");
 *
 *Include a function that adds two strings to make a third string. Note that the statement
 *
 *s2=s1;
 *
 *will be perfectly preasonable expression to copy one string to another.
 *
 *Write a compleete program to test your class to see that it does the following tasks:
 *a. Creates uninitialized string objects.
 *b. Creates objects with string constants.
 *c. Concatenates two strings properly.
 *d. Displays a desired string object.
 */
#include<iostream>
using namespace std;

class String {
	private:
		int length;
		char *str;
	public:
		String();
		String(int len,char *string);
		void concat(String str1,String str2);
		void display();
//		int len(String &str);
};

String :: String() {
	length=0;
	str=new char[length];
}

String :: String(int len,char *string) {
	length=len+1;
	str=new char[length];
	str=string;
}

//int String :: len(String &str) {
//	int len=0;
//	for(int i=0;(str+i)!='\0';i++) {
//		len++;
//	}
//	len++;
//	cout << "len: " << len ;
//	return(len);
//}

void String :: concat(String str1,String str2) {
	int len1=str1.length;
	int len2=str2.length;
	length=len1+len2-1;
	for(int i=0;i<len1;i++) {
		*(str+i)=*(str1.str+i);
	}
	for(int i=0;i<len2;i++) {
		*(str+len1-1+i)=*(str2.str+i);
	}
}

void String :: display() {
	cout << "The string is : \" " << str << " \" ." << endl ;
}

int main(int argc,char ** argv) {
	//Your code here
	String str1(5,(char *)"Hello"),str2(6,(char *)"World!");
	String str3;
	str3.concat(str1,str2);
	cout << "Object str1" << endl;
	str1.display();
	cout << "Object str2" << endl;
	str2.display();
	cout << "Object str3" << endl;
	str3.display();
	return(0);
}
