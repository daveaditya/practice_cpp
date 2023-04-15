//this Pointer.
#include<iostream>
#include<cstring>
using namespace std;

class person {
	private:
		char name[20];
		float age;
	public:
		person(char *s,float a) {
			strcpy(name,s);
			age=a;
		}
		person &greater(person &x) {
			if(x.age>=age) {
				return(x);
			}
			else {
				return(*this);
			}
		}
		void display(void) {
			cout << "Name: " << name << endl
					<< "Age: " << age << endl;
		}
};

int main(int argc,char ** argv) {
	//Your code here
	person P1("John",37.50), P2("Ahmed",29.0), P3("Hebber",40.25);
	person P=P1.greater(P3);
	cout << "Elder person is : " << endl;
	P.display();
	P=P1.greater(P2);
	cout << "Elder person is : " << endl;
	P.display();
	cout << "\nTrial" << endl;
	P1=P2.greater(P3);
	P1.display();
	return(0);
}
