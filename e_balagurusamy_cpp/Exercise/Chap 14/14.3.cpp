//Write a program using the algorithm count() to count how many elements in
//a container have specified value..
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	vector <int> v={1,2,3,4,2,6,1,7,8,1};
	vector <int> :: iterator it=v.begin();
	int num,cnt;
	cout << "Enter a number: ";
	cin >> num;
	cnt=count(v.begin(),v.end(),num);
	cout << "Number appers " << cnt << " times." << endl;
	return(0);
}
