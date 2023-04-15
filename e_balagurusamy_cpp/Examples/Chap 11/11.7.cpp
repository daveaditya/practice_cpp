//Counting Objects in a File.
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class emp {
	private:
		char name[10];
		int ecode;
	public:
		emp() {
			ecode=0;
		}
		emp(char *n,int c) {
			strcpy(name,n);
			ecode=c;
		}
};

int main(int argc,char ** argv) {
	//Your code here
	emp e[4];
	e[0]=emp((char *)"Amit",1);
	e[1]=emp((char *)"Joy",2);
	e[2]=emp((char *)"Rahul",3);
	e[3]=emp((char *)"Vikas",4);
	fstream file;
	file.open("Employee.dat",ios::in|ios::out);
	int i;
	for(i=0;i<4;i++) {
		file.write((char *)&e[i],sizeof(e[i]));
	}
	file.seekg(0,ios::end);
	int end=file.tellg();
	cout << "Number of objects stored in Employee.dat is: " << end/sizeof(emp) << endl;
	return(0);
}
