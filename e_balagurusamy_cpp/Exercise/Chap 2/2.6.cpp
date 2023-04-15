//Enter your aim here.
#include<iostream>

using namespace std;

class temp {
		float F,C;
	public :
		void get(float Fh) {
			F=Fh;
		}
		void convert(void) {
			C=(5*(F-32))/9;
			cout << "The temperature in Celcius is " << C;
		}
};

int main(int argc,char ** argv) {
	//Enter your code here
	temp one;
	float fah;
	cout << "Enter the temperature in Fahrenheit : ";
	cin >> fah;
	one.get(fah);
	one.convert();
	return(0);
}
