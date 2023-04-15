//Overloading of the Subscript Operator.
#include<iostream>
using namespace std;

class arr {
	private:
		int a[5];
	public:
		arr(int *s) {
			for(int i=0;i<5;i++) {
				a[i]=s[i];
			}
		}
		int operator [] (int k) {
			return(a[k]);
		}
};

int main(int argc,char ** argv) {
	//Your code here
	int x[5]={1,2,3,4,5};
	arr A(x);
	for(int i=0;i<5;i++) {
		cout << x[i] << "\t";
	}
	return(0);
}
