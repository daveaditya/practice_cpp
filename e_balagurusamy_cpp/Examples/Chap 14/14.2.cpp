//Using Lists.
#include<iostream>
#include<list>
#include<cstdlib>
using namespace std;

void display(list<int> &lst) {
	list<int> :: iterator p;
	for(p=lst.begin();p!=lst.end();++p) {
		cout << *p << " ";
	}
	cout << endl << endl;
}

int main(int argc,char ** argv) {
	//Your code here
	list<int> list1;
	list<int> list2(5);

	for(int i=0;i<3;i++) {
		list1.push_back(rand()/100);
	}
	list<int> :: iterator p;
	for(p=list2.begin();p!=list2.end();++p) {
		*p=rand()/100;
	}
	cout << "List1" << endl;
	display(list1);
	cout << "List2" << endl;
	display(list2);

	list1.push_front(100);
	list1.push_back(200);

	list2.pop_front();

	cout << "Now List1" << endl;
	display(list1);
	cout << "Now List2" << endl;
	display(list2);

	list<int> listA,listB;
	listA=list1;
	listB=list2;

	list1.merge(list2);
	cout << "Merged unsorted lists" << endl;
	display(list1);

	listA.sort();
	listB.sort();
	listA.merge(listB);
	cout << "Merged sorted lists" << endl;
	display(listA);

	listA.reverse();
	cout << "Reversed merged list" << endl;
	display(listA);

	return(0);
}
