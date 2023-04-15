//Popinter with Arrays.
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	int arr[10]={1,99,4,37,88,3,19,45,62,87};
	int num,*ptr;
	ptr=arr;
	cout << "Enter the element to be searched : ";
	cin >> num;
	for(int i=0;i<10;i++) {
		if(*ptr==num) {
			cout << endl << num << " is present in the array" << endl;
			break;
		}
		else if(i==9) {
			cout << endl << num << " is not present in the array" << endl;
		}
		ptr++;
	}
	return(0);
}
