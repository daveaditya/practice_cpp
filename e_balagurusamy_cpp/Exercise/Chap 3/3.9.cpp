//Program to calculate variance, standard deviation of N numbers.
#include<iostream>
#include<cmath>

using namespace std;

class Data {
	int size=0,tot=0;
	int *x = new int[size];
	float Mean,Variance,std_deviation;
public :
	void set(int s,int &a);
	void total();
	void mean();
	void variance();
	void std_dev();
	void get();
};

void Data :: set(int s,int &a) {
	size=s;
	x=&a;
}

void Data :: total() {
	for(int i=0;i<size;i++) {
		tot=tot+x[i];
	}
}

void Data :: mean() {
	Mean=tot/size;
}

void Data :: variance() {
	float sum=0.0;
	for(int i=0;i<size;i++) {
		sum=sum+pow((x[i]-Mean),2);
	}
	Variance=sum/size;
}

void Data :: std_dev() {
	std_deviation=sqrt(Variance);
}

void Data ::get() {
	cout << endl << "Total\t" << "Mean\t" << "Variance\t" << "Standard Deviation" << endl;
	cout << tot << "\t" << Mean << "\t" << Variance << "\t\t" << std_deviation << endl;
}

int main(int argc,char ** argv) {
	//Your code here
	int size=0;
	cout << "Enter the number of elements : ";
	cin >> size;
	int *arr = new int[size];
	Data test;
	for(int i=0;i<size;i++) {
		cout << endl << "Enter the number : ";
		cin >> arr[i];
	}
	test.set(size,*arr);
	test.total();
	test.mean();
	test.variance();
	test.std_dev();
	test.get();
	delete arr;
	return(0);
}
