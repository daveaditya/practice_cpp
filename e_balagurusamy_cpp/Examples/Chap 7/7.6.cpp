//Overloading of Pointer to member operator.
#include<iostream>
using namespace std;

class test {
	private:

	public:
		int num;
		test(int j) {
			num=j;
		}
		test * operator ->(void) {
			return this;
		}
};

int main(int argc,char ** argv) {
	//Your code here
	test T(5);
	test *Ptr=&T;

	cout << "T.num= " << T.num;
	cout << "\nPtr->num= " << Ptr->num;

	cout << "\nT->num= " << T->num;

	return(0);
}
