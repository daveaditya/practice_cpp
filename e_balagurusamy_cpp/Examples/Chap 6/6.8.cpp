//Memory Allocation to an Object using Destructor.
#include<iostream>
using namespace std;

class test {
	private:
		int *a;
	public:
		test(int size) {
			a=new int[size];
			cout << "\n\nConstructor Msg: Integer array of size " << size << " created ... ";
		}
		~test() {
			delete a;
			cout << "\n\nDestructor Msg: Freed up the memory allocated for integer array";
		}
};

int main(int argc,char ** argv) {
	//Your code here
	int s;
	cout << "Enter the size of the array ... ";
	cin >> s;
	cout << "\n\nCreating an object of test class ...";
	test T(s);
//	cout << "\n\nPress any key to end the program ... ";
//	getch();

	return(0);
}
