//Array of Objects.
#include<iostream>
using namespace std;

class employee {
	private:
		char name[30];
		float age;
	public:
		void getdata(void);
		void putdata(void);
};

void employee :: getdata(void) {
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
}

void employee :: putdata(void) {
	cout << "Name: " << name << "\n";
	cout << "Age: " << age << "\n";
}

const int size=3;

int main(int argc,char ** argv) {
	//Your code here
	employee manager[size];
	for(int i=0;i<size;i++) {
		cout << "\nDetails of manager " << i+1 << "\n";
		manager[i].getdata();
	}
	cout << "\n";
	for(int i=0;i<size;i++) {
		cout << "\nManager " << i+1 << "\n";
		manager[i].putdata();
	}
	return(0);
}
