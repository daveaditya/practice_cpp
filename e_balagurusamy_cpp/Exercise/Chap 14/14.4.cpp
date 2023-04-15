//Create an array with even numbers and a list with odd numbers.
//Merge two sequence of numbers into a vector using the algorithm merge.
//Display the vector.
#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	vector <int> even;
	even.push_back(2);
	even.push_back(4);
	even.push_back(6);
	even.push_back(8);
	even.push_back(10);
	vector <int> :: iterator it1=even.begin();

	list <int> odd;
	odd.push_back(1);
	odd.push_back(3);
	odd.push_back(5);
	odd.push_back(7);
	odd.push_back(9);
	list <int> :: iterator it2=odd.begin();

	for(it2=odd.begin();it2!=odd.end();it2++) {
		cout << " " << *it2;
	}

	vector <int> mix(10);
	vector <int> :: iterator it=mix.begin();

	merge(even,even+5,odd,odd+5,it);
	cout << "\n\nOutput" << endl;
	for(it=mix.begin();it!=mix.end();it++) {
		cout.width(4);
		cout << *it;
	}
	return(0);
}
