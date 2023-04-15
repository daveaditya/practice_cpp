//Array of Pointers to Objects
#include<iostream>
#include<cstring>
using namespace std;

class city {
	private:

	protected:
		char *name;
		int len;
	public:
		city() {
			len=0;
			name=new char[len+1];
		}
		void getname(void) {
			char *s;
			s=new char[30];
			cout << "Enter city name: ";
			cin >> s;
			len=strlen(s);
			name=new char[len+1];
			strcpy(name,s);
		}
		void printname(void) {
			cout << name << endl;
		}
};

int main(int argc,char ** argv) {
	//Your code here
	city *cptr[10];
	int n=0;
	int option;
	do {
		cptr[n]=new city;
		cptr[n]->getname();
		n++;
		cout << "Do you want to enter one more name?" << endl;
		cout << "Enter 1 for yes or  0 for no: ";
		cin >> option;
	}while(option);
	cout << endl << endl;
	for(int i=0;i<=n;i++) {
		cptr[i]->printname();
	}
	return(0);
}
