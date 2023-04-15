/*
 * Write a program that accepts a shopping list of five items from the keyboard and stores them
 * in a vector. Extend the program to accomplish the following.
 *
 * 1. To delete a specified item in the list.
 * 2. To add an item at a specified location.
 * 3. To add an item at the end.
 * 4. To print the contents of the vector.
 */
#include<iostream>
#include<vector>
using namespace std;

class shoppingList {
	private:
		char *itemName;
		int quantity;
	public:
		shoppingList();
		shoppingList(char *,int);
//		shoppingList(shoppingList &);
		~shoppingList();
		void display(void);
		void setter(char *,int);
		friend void addItem(vector <shoppingList> &,int);
		friend void deleteItem(vector <shoppingList> &,int);
};

shoppingList :: shoppingList() {
	itemName = new char[0];
	quantity=0;
}

shoppingList :: shoppingList(char *name,int q) {
	itemName = new char[sizeof(name)];
	itemName=name;
	quantity=q;
}

//shoppingList :: shoppingList(shoppingList &temp) {
//	itemName = new char[sizeof(temp.itemName)];
//	itemName=temp.itemName;
//	quantity=temp.quantity;
//}

shoppingList :: ~shoppingList() {
	cout << "Shopping List Destructor." << endl;
}

void shoppingList :: display(void) {
	cout << "ITEM NAME: " << itemName << "\t";
	cout << "QUANTITY: " << quantity << endl;
}

void shoppingList :: setter(char *name,int q) {
	itemName = new char[sizeof(name)];
	itemName=name;
	quantity=q;
}

void addItem(vector <shoppingList> &temp,int position) {
	temp.resize(6);
	vector <shoppingList> :: iterator it=temp.begin();
	if(position!=-1) {
		it=it+position;
		const shoppingList n((char *)"Alien",404);
		temp.insert(it,n);
	}
	else {
		it=temp.end();
		shoppingList n;
		n.setter((char *)"Alien",404);
		temp.push_back(n);
	}
}

void deleteItem(vector <shoppingList> &temp,int position) {
	vector <shoppingList> :: iterator it=temp.begin();
	temp.erase(it+position-1);
}

int main(int argc,char ** argv) {
	//Your code here
	vector <shoppingList> slt(5);
	vector <shoppingList> :: iterator it=slt.begin();
	it->setter((char *)"Apple",12);
	it++;
	it->setter((char *)"Orange",5);
	it++;
	it->setter((char *)"Grapes",4);
	it++;
	it->setter((char *)"Mango",10);
	it++;
	it->setter((char *)"Banana",12);
	it=slt.begin();
	int i=1;
	while(it!=slt.end()) {
		cout.width(3);
		cout.setf(ios::left,ios::adjustfield);
		cout << i;
		it->display();
		cout << endl;
		it++;
		i++;
	}
	it=slt.begin();
	cout << endl << endl << "New List" << endl;
	deleteItem(slt,3);
	i=1;
	while(it!=slt.end()) {
		cout.width(3);
		cout.setf(ios::left,ios::adjustfield);
		cout << i;
		it->display();
		cout << endl;
		it++;
		i++;
	}
	addItem(slt,3);
	it=slt.begin();
	i=1;
	while(it!=slt.end()) {
		cout.width(3);
		cout.setf(ios::left,ios::adjustfield);
		cout << i;
		it->display();
		cout << endl;
		it++;
		i++;
	}
	return(0);
}
