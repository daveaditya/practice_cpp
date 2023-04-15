//Modify the program 15.6 to count the number of words which start with character 's'.
#include<iostream>
using namespace std;

#include<iostream>
#include<string>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	string text;
	cout << "Enter a text: ";
	getline(cin,text);
	string :: iterator it;
	int count=0;
	int FLAGS=0;
	int FLAGSP=0;
	for(it=text.begin();it!=text.end();it++) {
		if(*(it)=='s' || *(it)=='S') {
			FLAGS=1;
		}
		if(FLAGS==1 && *it==' ') {
			FLAGSP=1;
		}
		if(FLAGS==1 && FLAGSP==1) {
			count++;
			FLAGS=0;
			FLAGSP=0;
		}
	}
	cout << "No. of \" It \" are " << count << endl;
	return(0);
}
