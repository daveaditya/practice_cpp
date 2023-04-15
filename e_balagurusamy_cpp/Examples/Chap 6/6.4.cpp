//Copy Constructor.
#include<iostream>
using namespace std;

class code {
	private:
		int id;
	public:
		code() {

		}
		code(int a) {
			id=a;
		}
		code(code &x) {
			id=x.id;
		}
		void display(void) {
			cout << id;
		}
};

int main(int argc,char ** argv) {
	//Your code here
	code A(100);
	code B(A);
	code C=A;

	code D;
	D=A;

	cout << "\n id of A: ";
	A.display();
	cout << "\n id of B: ";
	B.display();
	cout << "\n id of C: ";
	C.display();
	cout << "\n id of D: ";
	D.display();

	return(0);
}
