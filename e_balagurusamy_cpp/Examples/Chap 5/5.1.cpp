//Class Implementation.
#include<iostream>
using namespace std;

class item {
	private:
		int number;
		float cost;
	public:
		void getdata(int a,float b);
		void putdata(void) {
			cout << "number: " << number << "\n";
			cout << "cost: " << cost << "\n";
		}
};

void item :: getdata(int a,float b) {
	number=a;
	cost=b;
}

int main(int argc,char ** argv) {
	//Your code here
	item x;

	cout << "\nobject x" << "\n";

	x.getdata(100,299.95);
	x.putdata();

	item y;

	cout << "\nobject y" << "\n";

	y.getdata(200,175.50);
	y.putdata();

	return(0);
}


/*

object x
number: 100
cost: 299.95

object y
number: 200
cost: 175.5

 */
