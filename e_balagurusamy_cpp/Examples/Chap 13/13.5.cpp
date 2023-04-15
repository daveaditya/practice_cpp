//Class Type as an Exception.
#include<iostream>
#include<cstring>
using namespace std;

class Error {
	private:
		int err_code;
		char *err_desc;
	public:
		Error(int c,char *d) {
			err_code=c;
			err_desc=new char[strlen(d)];
			strcpy(err_desc,d);
		}
		void err_display(void) {
			cout << "Error Code: " << err_code <<endl << "Error Description: " << err_desc;
		}
};

int main(int argc,char ** argv) {
	//Your code here
	try {
		cout << "Press any key to throw a test exception.";
		getch();
		throw(Error(99,"Test Exception"));
	}
	catch(Error &e) {
		cout << "\nException caught successfully";
		e.err_display();
	}
	getch();
	return(0);
}
