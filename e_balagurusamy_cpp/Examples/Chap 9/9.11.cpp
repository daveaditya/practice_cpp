//Pointer to Derived Objects.
#include<iostream>
using namespace std;

class BC {
	private:

	public:
		int b;
		void show() {
			cout << "b= " << b << endl;
		}
};

class DC : public BC {
	private:

	public:
		int d;
		void show() {
			cout << "b= " << b << endl
					<< "d= " << d << endl;
		}
};

int main(int argc,char ** argv) {
	//Your code here
	BC *bptr;
	BC base;
	bptr=&base;
	bptr->b=100;
	cout << "bptr points to base object" << endl;
	bptr->show();
	DC derived;
	bptr=&derived;
	bptr->b=200;
	// bptr->d=300;
	cout << "bptr now points to derived object" << endl;
	bptr->show();
	DC *dptr;
	dptr=&derived;
	dptr->d=300;
	cout << "dptr is derived type pointer" << endl;
	dptr->show();
	cout << "using ((DC *)bptr)" << endl;
	((DC *)bptr)->d=400;
	((DC *)bptr)->show();
	return(0);
}
