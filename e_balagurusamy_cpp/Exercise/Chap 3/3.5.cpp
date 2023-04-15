//Program to count votes for 5 candidates
#include<iostream>

using namespace std;

class votes {
	int can[5]={0,0,0,0,0};
	int spoilt=0;
public :
	void set(int no);
	void get();
	void win();
};

void votes :: set(int no) {
	if(no>5 || no<1) {
		spoilt=spoilt+1;
	}
	else {
		++can[(no-1)];
	}
}

void votes :: get() {
	for(int i=0;i<5;i++) {
		cout << "Votes for " << (i+1) << " candidate : " << can[i] << endl;
	}
	cout << "No of spoilt ballot : " << spoilt << endl;
}

void votes :: win() {
	int max=0,count=0;
	for(int i=0;i<5;i++) {
		if(max<can[i]) {
			max=i;
		}
		if(can[1]==can[i]) {
			count++;
		}
	}
	if(count==5) {
		cout << "\nAll the election is a draw." << endl;
	}
	else {
		cout << "The winner is candidate no. : " << max;
	}
}

int main(int argc,char ** argv) {
	//Enter your code here
	int no,can=0;
	votes test;
	cout << "Enter the number of voters : ";
	cin >> no;
	for(int i=1;i<=no;i++) {
		cout << "Enter the candidate number : ";
		cin >> can;
		test.set(can);
	}
	test.get();
	test.win();
	return(0);
}
