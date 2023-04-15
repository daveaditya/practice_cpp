/*
 *Write a code segement that does the following:
 *
 *1. Defines a vector v with a maximum size of 10.
 *2. Sets the first element of v to 0.
 *3. Sets the last element of v to 9.
 *4. Sets the other elements to 1.
 *5. Displays the contents of v.
 */
#include<iostream>
#include<vector>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	vector <int> v;
	v.push_back(0);
	for(int i=1;i<9;i++) {
		v.push_back(1);
	}
	v.push_back(9);
	cout << "Displaying vector content: " << endl << endl;
	for(vector <int> :: iterator i=v.begin();i!=v.end();i++) {
		cout.width(4);
		cout << *i;
	}
	return(0);
}
