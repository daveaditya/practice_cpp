//Use of Keyword mutable.
#include<iostream>
using namespace std;

class ABC {
	private:
		mutable int m;
	public:
		explicit ABC(int x=0) {
			m=x;
		}
		void change() const {
			m=m+10;
		}
		int display() const {
			return(m);
		}
};

int main(int argc,char ** argv) {
	//Your code here
	const ABC abc(100);
	cout << "abc contains: " << abc.display();

	abc.change();
	cout << "\nabc now contains: " << abc.display() << endl;

	return(0);
}
