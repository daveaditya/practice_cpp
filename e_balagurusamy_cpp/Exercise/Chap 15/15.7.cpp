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
	if(text[0]=='s' || text[0]=='S') {
		FLAGS=1;
	}
	for(it=text.begin();it!=text.end();it++) {
		if(*it==' ' && (*(it+1)=='s' || *(it+1)=='S')) {
			FLAGSP=1;
		}
		if(FLAGSP==1 && *(it)=='s') {
			FLAGS=1;
		}
		if(FLAGS==1 && FLAGSP==1) {
			count++;
			FLAGS=0;
			FLAGSP=0;
		}
	}
	cout << "No. of \" words starting with s \" are " << count << endl;
	return(0);
}
