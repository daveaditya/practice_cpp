//Another Example of Class Template.
#include<iostream>
using namespace std;

const int size=3;
template<class T>
class vector {
	private:
		T* v;
	public:
		vector() {
			v=new T[size];
			for(int i=0;i<size;i++) {
				v[i]=0;
			}
		}
		vector(T* a) {
			v=new T[size];
			for(int i=0;i<size;i++) {
				v[i]=a[i];
			}
		}
		T operator *(vector &y) {
			T sum=0;
			for(int i=0;i<size;i++) {
				sum+=this->v[i]*y.v[i];
			}
			return(sum);
		}
		void display(void) {
			for(int i=0;i<size;i++) {
				cout << v[i] << "\t";
			}
			cout << endl;
		}
};

int main(int argc,char ** argv) {
	//Your code here
	float x[3]={1.1,2.2,3.3};
	float y[3]={4.4,5.5,6.6};
	vector<float>v1;
	vector<float>v2;
	v1=x;
	v2=y;
	cout << "v1= ";
	v1.display();
	cout << "v2= ";
	v2.display();
	cout << "v1 x v2= " << v1*v2;
	return(0);
}
