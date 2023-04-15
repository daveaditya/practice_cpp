//Friend Function.
#include<iostream>
using namespace std;

class sample {
	private:
		int a;
		int b;
	public:
		void setvalue() {
			a=25;
			b=40;
		}
		friend float mean(sample s);
};

float mean(sample s) {
	return float(s.a+s.b)/2.0;
}

int main(int argc,char ** argv) {
	//Your code here
	sample X;
	X.setvalue();
	cout << "Mean value= " << mean(X) << "\n";
	return(0);
}
