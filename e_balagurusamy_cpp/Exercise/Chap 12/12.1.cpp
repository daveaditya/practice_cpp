//Write a function template for finding the minimum value contained in an array.
#include<iostream>
using namespace std;

template <class T>
T min_value(T temp[],int size) {
	T min=0;
	for(int i=0;i<size;i++) {
		if(min>temp[i]) {
			min=temp[i];
		}
	}
	return(min);
}

int main(int argc,char ** argv) {
	//Your code here
	int numbers[10]={1,20,6,77,-22,-366,32,11,30,-90};
	int min=min_value(numbers,10);
	cout << "The minimum number is: " << min;
	return(0);
}
