/*
 * Two files named 'Source1' and 'Source2' contain sorted list of integers.
 * Write a program that reads the contents of both the files and stores the merged
 * list in sorted form in a new file named 'Target'.
 */
#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	vector <int> set1(10);
	vector <int> set2(10);
	vector <int> :: iterator it1=set1.begin();
	vector <int> :: iterator it2=set2.begin();
//	int randomNumber=0;
//	for(int i=0;i<10;i++) {
//		srand((unsigned)time(0));
//		randomNumber=(rand()%(i+100));
//		set1.push_back(randomNumber);
//	}
//	for(int i=0;i<10;i++) {
//		srand((unsigned)time(0));
//		randomNumber=(rand()%(i+199));
//		set2.push_back(randomNumber);
//	}
//	cout << "Elements in Set1: ";
//	for(it1=set1.begin();it1!=set1.end();it1++) {
//		cout << *it1 << "\t";
//	}
//	cout << "\nElements in Set2: ";
//	for(it2=set2.begin();it2!=set2.end();it2++) {
//		cout << *it2 << "\t";
//	}
//	it1=set1.begin();
//	it2=set2.begin();
//	sort(set1.begin(),set1.begin()+10);
//	sort(set2.begin(),set2.begin()+10);
//	cout << endl << "\nAfter sorting" << endl;
//	cout << "\nElements in Set1: ";
//	for(it1=set1.begin();it1!=set1.end();it1++) {
//		cout << *it1 << "\t";
//	}
//	cout << "\nElements in Set2: ";
//	for(it2=set2.begin();it2<set2.end();it2++) {
//		cout << *it2 << "\t";
//	}

	vector <int> set3(20);
	vector <int> :: iterator it3=set3.begin();
//	merge(set1.begin(),set1.begin()+10,set2.begin(),set2.begin()+10,set3.begin());
//	cout << "\nElements in Set3: ";
//	for(it3=set3.begin();it3!=set3.end();it3++) {
//		cout << *it3 << "\t";
//	}

	ofstream output1("Source 1.txt");
	for(it1=set1.begin();it1!=set1.end();it1++) {
		output1.write((char *)&it1,sizeof(vector <int>));
	}

	ofstream output2("Source 2.txt");
	for(it2=set2.begin();it2!=set2.end();it2++) {
		output2.write((char *)&it2,sizeof(vector <int>));
	}

	output1.close();
	output2.close();

	it1=set1.begin();
	it2=set2.begin();
	ifstream input1("Source 1.txt");
	ifstream input2("Source 2.txt");
	vector <int> temp;
	while(!input1.eof()) {
		input1.read((char *)temp,sizeof(vector <int>));
		*it1=temp;
		it1++;
	}
	while(!input2.eof()) {
		input2.read((char *)temp,sizeof(vector <int>));
		*it2=temp;
		it2++;
	}


	return(0);
}
