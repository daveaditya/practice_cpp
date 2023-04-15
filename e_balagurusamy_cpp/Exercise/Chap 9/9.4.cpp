/*
 * Using the concept of pointers write a function that swaps the private data
 * of two objects of the same class type.
 */
#include<iostream>
using namespace std;

class test {
	private:
		int a;
	public:
		test();
		test(int x);
		~test();
		void display(void);
		friend void swap(test &t1,test &t2);
};

test :: test() {
	a=0;
}

test :: test(int x) {
	a=x;
}

test :: ~test() {
	cout << "\nDestructor" << endl;
}

void test :: display(void) {
	cout << "Value of a: " << a;
}

void swap(test &t1,test &t2) {
	test temp;
	temp=t2;
	t2=t1;
	t1=t2;
}

int main(int argc,char ** argv) {
	//Your code here
	cout << "Object 1" << endl;
	test t1(10);
	t1.display();
	cout << "\nObject 2" << endl;
	test t2(20);
	t2.display();
	cout << "\nAfter swap function" << endl;
	swap(t1,t2);
	cout << "\nT1";
	t1.display();
	cout << "\nT2 ";
	t2.display();
	return(0);
}
