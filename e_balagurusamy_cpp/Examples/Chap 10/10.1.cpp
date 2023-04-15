//Character I/O with get() and put()
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int count=0;
	char c;
	cout << "INPUT TEXT" << endl;
	cin.get(c);
	while(c!='\n') {
		cout.put(c);
		count++;
		cin.get(c);
	}
	cout << "\nNumber of characters= " << count << endl;
	return(0);
}
