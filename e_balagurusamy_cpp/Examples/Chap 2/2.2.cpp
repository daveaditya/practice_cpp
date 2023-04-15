//Average of Two Numbers.
#include<iostream>
using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	float number1,number2,sum,average;
	cout << "Enter two number: ";
	cin >> number1;
	cin >> number2;

	sum=number1+number2;
	average=sum/2;

	cout << "Sum = " << sum << "\n";
	cout << "Average = " << average << "\n";

	return(0);
}
