//Write an inline function that obtains the largest of three numbers.
#include<iostream>
#define largest(x,y,z) (x>y && x>z)? cout << "\nx is largest" : ((y>z)? cout << "\ny is largest" : cout << "\nz is largest" )
using namespace std;

inline void large(int x,int y,int z) {
	(x>y && x>z)? cout << "\nx is largest" : ((y>z)? cout << "\ny is largest" : cout << "\nz is largest" );
}

int main(int argc,char ** argv) {
	//Your code here
	largest(120,20,30);
	large(20,1,32);
	return(0);
}
