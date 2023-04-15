//Program for pointer to pointer member of class.
#include<iostream>
using namespace std;

class ABC {
	private:
		int length;
		int *str;
	public:
		ABC(int len);
		~ABC();
		void insert();
		void display();
		ABC add(ABC a,ABC b);
};

ABC :: ABC(int len) {
	length=len;
	str=new int[len];
}

ABC :: ~ABC() {
	cout << "Destroyed." << endl ;
}

void ABC :: insert() {
	cout << "\nEnter numbers: ";
	for(int i=0;i<length;i++) {
		cin >> *(str+i);
	}
}

void ABC :: display() {
	for(int i=0;i<length;i++) {
		cout << endl << " " << *(str+i);
	}
}

ABC ABC :: add(ABC a,ABC b) {
	ABC C(a.length);
	a.display();
	b.display();
	for(int i=0;i<C.length;i++) {
		*(C.str+i)=*(a.str+i)+(*(b.str+i));
	}
	return(C);
}

int main(int argc,char ** argv) {
	//Your code here
	ABC A(5),B(5);
	A.insert();
	A.display();
	B.insert();
	B.display();
	ABC C(5);
	C=C.add(A,B);
	C.display();
	return(0);
}
