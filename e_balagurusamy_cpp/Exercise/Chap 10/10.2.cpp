/*
 * Modify the progrma in 10.1 to fill the unused spaces with hyphens.
 */
#include<iostream>
using namespace std;

class item {
	private:
		char item_name[15];
		int item_code;
		float item_cost;
	protected:

	public:
//		item();
//		item(char name[15],int code,float cost);
		~item();
		void display(void);
		void insert(void);
};

//item :: item() {
//	item_name="00000000000000";
//	item_code=0;
//	item_cost=0;
//}

//item :: item(char name[15],int code,float c) {
//	item_name=(char [])name;
//	item_code=code;
//	item_cost=c;
//}

item :: ~item() {
	cout << "Item dsestructor" << endl;
}

void item :: display(void) {
	cout.fill('-');
	cout.width(15);
	cout.setf(ios::left,ios::adjustfield);
	cout << item_name;
	cout.width(5);
	cout.setf(ios::left,ios::adjustfield);
	cout << item_code;
	cout.width(10);
	cout.setf(ios::right,ios::adjustfield);
	cout.setf(ios::fixed,ios::floatfield);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << item_cost << endl;
}

void item :: insert(void) {
//	char name[15];
	int code;
	float cost;
	cout << "\n\nEnter item name: ";
	cin >> item_name;
//	item_name=(char *)name;
	cout << "Enter item code: ";
	cin >> code;
	item_code=code;
	cout << "Enter item cost: ";
	cin >> cost;
	item_cost=cost;
}

int main(int argc,char ** argv) {
	//Your code here
	int size;
	cout << "Enter the number of items: ";
	cin >> size;
	item *obj;
	obj=new item[size];
	cout << "\nEnter data...";
	for(int i=0;i<size;i++) {
		cout << "\n\nEnter data of item " << i+1;
		obj[i].insert();
	}
	cout << "\n\nDisplaying items..." << endl;
	cout.width(15);
	cout.setf(ios::left,ios::adjustfield);
	cout << "\nName";
	cout.width(5);
	cout.setf(ios::left,ios::adjustfield);
	cout << "Code";
	cout.width(10);
	cout.setf(ios::right,ios::adjustfield);
	cout.setf(ios::showpoint);
	cout << "Cost" << endl << endl;
	for(int i=0;i<size;i++) {
		obj[i].display();
	}
	return(0);
}
