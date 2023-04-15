//Read strings wityh getline().
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int size=20;
	char city[20];
	cout << "Enter city name: ";
	cin >> city;
	cout << "\nCity name: " << city << endl << endl;
	cout << "Enter city name again: ";
	cin.getline(city,size);
	cout << "\nCity name now: " << city << endl << endl;
	cout << "Enter another city name: ";
	cin.getline(city,size);
	cout << "\nNew city name: " << city << endl << endl;
	return(0);
}
