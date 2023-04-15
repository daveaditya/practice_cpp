//Multiple Inheritance.
#include<iostream>
using namespace std;

class M {
	private:

	protected:
		int m;
	public:
		void get_m(int);
};

class N {
	private:

	protected:
		int n;
	public:
		void get_n(int);
};

class P : public M,public N {
	private:

	protected:

	public:
		void display(void);
};

void M :: get_m(int x) {
	m=x;
}

void N :: get_n(int y) {
	n=y;
}

void P :: display(void) {
	cout << "m= " << m << "\n";
	cout << "n= " << n << "\n";
	cout << "m*n= " << m*n << "\n";
}

int main(int argc,char ** argv) {
	//Your code here
	P p;
	p.get_m(10);
	p.get_n(20);
	p.display();

	return(0);
}
