//Obtaining String Characteristics.
#include<iostream>
#include<string>
using namespace std;

void display(string str) {
	cout << "Size= " << str.size() << endl;
	cout << "Length= " << str.length() << endl;
	cout << "Capacity= " << str.capacity() << endl;
	cout << "Maximum Size= " << str.max_size() << endl;
	cout << "Empty: " << (str.empty() ? "yes" : "no");
	cout << endl << endl;
}

int main(int argc,char ** argv) {
	//Your code here
	string str1;

	cout << "Initial status: " << endl;
	display(str1);

	cout << "Enter a string(one word)" << endl;
	cin >> str1;
	cout << "Status now: " << endl;
	display(str1);

	str1.resize(15);
	cout << "Status after resizing: " << endl;
	display(str1);
	cout << endl;
	return(0);
}
