//Write a funciton template to perform linear search in an array.
#include<iostream>
using namespace std;

template <class T>
int linear_search(T *temp,int size,T search_term) {
	for(int i=0;i<size;i++) {
		if(search_term==temp[i]) {
			return(i);
		}
	}
	return(-1);
}

int main(int argc,char ** argv) {
	//Your code here
	int arr[10]={10,20,30,40,50,60,70,8,9,010};
	int pos=linear_search(arr,10,50);
	if(pos!=-1) {
		cout << "Element found at position: " << pos+1 << endl;
	}
	else {
		cout << "Element not found" << endl;
	}
	return(0);
}
