//Constructors in Derived Class.
#include<iostream>
using namespace std;

class alpha {
	private:
		int x;
	protected:

	public:
		alpha(int i) {
			x=i;
			cout << "alpha initialized \n";
		}
		void show_x(void) {
			cout << "x= " <<x << "\n";
		}
};

class beta {
	private:
		float y;
	protected:

	public:
		beta(float j) {
			y=j;
			cout << "beta initialized \n";
		}
		void show_y(void) {
			cout << "y= " << y << "\n";
		}
};

class gamma : public beta,public alpha {
	private:
		int m,n;
	protected:

	public:
		gamma(int a,float b,int c,int d) : beta(b),alpha(a){
			m=c;
			n=d;
			cout << "gamma initialized \n";
		}
		void show_mn(void) {
			cout << "m= " << m << "\n"
					<< "n= " << n << "\n";
		}
};

int main(int argc,char ** argv) {
	//Your code here
	gamma g(5,10.75,20,30);
	cout << "\n";
	g.show_x();
	g.show_y();
	g.show_mn();

	return(0);
}
