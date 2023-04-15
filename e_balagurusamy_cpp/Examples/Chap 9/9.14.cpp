//Pure Virtual Function.
#include<iostream>
using namespace std;

class Balagurusamy {
	private:

	protected:

	public:
		virtual void example()=0;
};

class C : public Balagurusamy {
	private:

	protected:

	public:
		void example() {
			cout << "C text book written by Balagurusamy" << endl;
		}
};

class oopc : public Balagurusamy {
	private:

	protected:

	public:
		void example() {
			cout << "C++ text book written by Balagurusamy" << endl;
		}
};

int main(int argc,char ** argv) {
	//Your code here
	Balagurusamy *arra[2];
	C e1;
	oopc e2;
	Balagurusamy obj;
	arra[0]=&e1;
	arra[1]=&e2;
	arra[0]->example();
	arra[1]->example();
	return(0);
}
