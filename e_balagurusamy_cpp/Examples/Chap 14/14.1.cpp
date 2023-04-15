//Using Vectors
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v) {
	for(unsigned int i=0;i<v.size();i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(int argc,char ** argv) {
	//Your code here
	vector<int> v;
	cout << "Initial size= " << v.size() << endl;
	int x;
	cout << "Enter five integer values: ";
	for(int i=0;i<5;i++) {
		cin >> x;
		v.push_back(x);
	}
	cout << "Size after adding 5 values: ";
	cout << v.size() << endl;

	cout << "Current contents: " << endl;
	display(v);

	v.push_back(6.6);

	cout << "\nSize = " << v.size() << endl;
	cout << "Contents now: " << endl;
	display(v);

	vector<int> :: iterator itr =v.begin();
	itr=itr+3;
	v.insert(itr,9);

	cout << "\nContents after inserting: " << endl;
	display(v);

	v.erase(v.begin()+3,v.begin()+4);

	cout << "\nContents after deletion: " << endl;
	display(v);
	cout << "END" << endl;

	return(0);
}
