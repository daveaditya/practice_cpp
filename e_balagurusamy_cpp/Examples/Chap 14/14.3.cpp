//Using Maps.
#include<iostream>
#include<map>
#include<string>
using namespace std;

typedef map<string,int> phoneMap;

int main(int argc,char ** argv) {
	//Your code here
	string name;
	int number;
	phoneMap phone;
	cout << "Enter hree sets of name and number" << endl;

	for(int i=0;i<3;i++) {
			cin >> name;
			cin >> number;
			phone[name]=number;
	}

	phone["Jacob"]=4444;

	phone.insert(pair<string,int>("Bose",5555));
	int n=phone.size();
	cout << "\nSize of Map: " << n << endl << endl;
	cout << "List of telephone numbers" << endl;
	phoneMap :: iterator p;
	for(p=phone.begin();p!=phone.end();p++) {
		cout << (*p).first << " " << (*p).second << endl;
	}
	cout << endl;
	cout << "Enter name: ";
	cin >> name;
	number=phone[name];
	cout << "Number: " << number << endl;
	return(0);
}
