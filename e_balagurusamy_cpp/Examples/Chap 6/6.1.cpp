//Example of Parameterized Constructor.
#include<iostream>
using namespace std;

class Point {
	private:
		int x,y;
	public:
		Point(int a,int b) {
			x=a;
			y=b;
		}
		void display() {
			cout << "(" << x << "," << y << ")" << "\n";
		}
};

int main(int argc,char ** argv) {
	//Your code here
	Point p1(1,1);
	Point p2(5,10);
	cout << "Point p1= ";
	p1.display();
	cout << "Point p2= ";
	p2.display();
	return(0);
}
