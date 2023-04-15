//Wrie a program using the find() algorithm to locate the position of
//a specified value in a sequence container.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	vector <int> v={1,2,3,4,5,6,7,8,9,10};
	int num;
	cout << "Enter the number to be searched: ";
	cin >> num;
	vector <int> :: iterator it=v.begin();
	it=find(v.begin(),v.end(),num);
	if(it!=v.end()) {
		cout << "Element found!";
	}
	else {
		cout << "Element not found";
	}
	return(0);
}
