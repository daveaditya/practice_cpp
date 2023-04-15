//Initialization List in Constructors.
#include<iostream>
using namespace std;

class alpha {
	private:
		int x;
	protected:

	public:
		alpha(int i) {
			x=i;
			cout << "\n alpha constructed";
		}
		void show_alpha(void) {
			cout << "x= " << x << "\n";
		}
};

class beta {
	private:
		float p,q;
	protected:

	public:
		beta(float a,float b) : p(a),q(b+q) {
			cout << "\n beta constructor";
		}
		void show_beta(void) {
			cout << "p= " << p << "\n";
			cout << "q= " << q << "\n";
		}
};

class gamma : public beta,public alpha {
	private:
		int u,v;
	protected:

	public:
		gamma(int a,int b,float c) : beta(c,c),alpha(a*2),u(a) {
			v=b;
			cout << "\n gamma constructed";
		}
		void show_gamma(void) {
			cout << "u= " << u << "\n";
			cout << "v= " <<v << "\n";
		}
};

int main(int argc,char ** argv) {
	//Your code here
	gamma g(2,4,2.5);

	cout << "\n\nDisplay member values " << "\n\n";

	g.show_alpha();
	g.show_beta();
	g.show_gamma();

	return(0);
}
