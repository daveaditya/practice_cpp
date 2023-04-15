//Program to display use of member function.
#include<iostream>
using namespace std;

class temp {
	private:
		int n1;
		float n2;
	public:
		void get(int a,float b) {
			n1=a;
			n2=b;
		}
		void print(void) {
			cout << "\nThe values in the object are : ";
			cout << "n1= " << n1 << " and n2= " << n2;
		}
};

int main(int argc,char ** argv) {
	int a;
	float b;
	temp x;
	cout << "Enter an integer number : " << endl;
	cin >> a;
	cout << "Enter a floating point number : " << endl;
	cin >> b;
	x.get(a,b);
	x.print();
	return(0);
}
