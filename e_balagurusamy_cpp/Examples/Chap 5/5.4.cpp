//Static Class Member.
#include<iostream>
using namespace std;

class item {
	private:
		static int count;
		int number;
	public:
		void getdata(int a) {
			number=a;
			count++;
		}
		void getcount(void) {
			cout << "count: ";
			cout << count << "\n";
		}
};

int item :: count;

int main(int argc,char ** argv) {
	//Your code here
	item a,b,c;
	a.getcount();
	b.getcount();
	c.getcount();

	a.getdata(100);
//	a.getcount();
	b.getdata(200);
//	a.getcount();
	c.getdata(300);
//	a.getcount();

	cout << "After reading data" << "\n";

	a.getcount();
	b.getcount();
	c.getcount();

	return(0);
}
