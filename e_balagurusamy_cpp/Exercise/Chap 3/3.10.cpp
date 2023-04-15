//Program to caluculate electricity bill.
// For the first 100 units, 60P. For next 200 units 80P. and Beyond 300 units 90P
#include<iostream>
#include<string>

using namespace std;

class electricity {
	string name;
	float consume=0.0;
	float bill=0.0;
public :
	void set(string a,float con);
	void cost();
	void get();
};

void electricity :: set(string a,float con) {
	name=a;
	consume=con;
}

void electricity :: cost() {
	if(consume<=100) {
		bill=(consume*60)/100;
	}
	else if(consume>100 && consume<=300) {
		bill=((100*60)+((consume-100)*80))/100;
	}
	else if(consume>300) {
		bill=((100*60)+(200*80)+((consume-300)*90))/100;
	}
	if(bill<50.0) {
		bill=50.00;
	}
	if(bill>300.00) {
		bill=bill+(bill*0.15);
	}
}

void electricity :: get() {
	cout << name << "\t" << consume << "\t\t" << bill << endl;
}

int main(int argc,char ** argv) {
	//Your code here
	int size;
	string name;
	float consume;
	cout << "Enter the number of customers :";
	cin >> size;
	electricity *test = new electricity[size];
	for(int i=0;i<size;i++) {
		cout << "Enter customer's name :";
		cin >> name;
		cout << "Enter the consumption in units : ";
		cin >> consume;
		test[i].set(name,consume);
		test[i].cost();
	}
	cout << endl << "Name\t" << "Consumption\t" << "Cost in Rs." << endl << endl;
	for(int i=0;i<size;i++) {
		test[i].get();
	}
	return(0);
}
