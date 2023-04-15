//Nesting of Member Functions.
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class binary {
	private:
		string s;
	public:
		void read(void) {
			cout << "Enter a binary number: ";
			cin >> s;
		}
		void chk_bin(void) {
			for(unsigned int i=0;i<s.length();i++) {
				if(s.at(i)!='0' && s.at(i)!='1') {
					cout << "\nIncorrect binary number format ... the program will quit";
					exit(0);
				}
			}
		}
		void ones(void) {
			chk_bin();
			for(unsigned int i=0;i<s.length();i++) {
				if(s.at(i)=='0')
					s.at(i)='1';
				else
					s.at(i)='0';
			}
		}
		void displayones(void) {
			ones();
			cout << "\nThe 1's complement of the above binary number is: " << s;
		}
};

int main(int argc,char ** argv) {
	//Your code here
	binary b;
	b.read();
	b.displayones();
	return(0);
}
