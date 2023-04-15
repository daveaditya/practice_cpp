//Virtual Functions
#include<iostream>
using namespace std;

class Base {
	private:

	public:
	void display() {
		cout << "Display base" << endl;
	}
	virtual void show() {
		cout << "Show base" << endl;
	}
};

class Derived : public Base {
	private:

	public:
		void display() {
			cout << "Display derived" << endl;
		}
		void show() {
			cout << "Show derived" << endl;
		}
};

int main(int argc,char ** argv) {
	//Your code here
	Base B;
	Derived D;
	Base *bptr;
	cout << "bptr points to Base" << endl;
	bptr=&B;
	bptr->display();
	bptr->show();
	cout << "bptr points to Derived" << endl;
	bptr=&D;
	bptr->display();
	bptr->show();
	return(0);
}
