//Working with Single File.
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	ofstream outf("ITEM");
	cout << "Enter item name: ";
	char name[30];
	cin >> name;
	outf << name << "\n";
	cout << "Enter item cost: ";
	float cost;
	cin >> cost;
	outf << cost << "\n";
	outf.close();
	ifstream inf("ITEM");
	inf >> name;
	inf >> cost;
	cout << endl;
	cout << "Item name: " << name << endl;
	cout << "Item cost: " << cost << endl;
	inf.close();
	return(0);
}
