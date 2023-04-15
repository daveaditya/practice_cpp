//Program to perform cricketer analysis.
#include<iostream>

using namespace std;

class cricketer {
	int Runs, Innings,n_out;
	float average;
public :
	void set(int R,int Inn,int nout);
	void get();
	void avg();
};

void cricketer :: set(int R,int Inn,int nout) {
	Runs=R;
	Innings=Inn;
	n_out=nout;
}

void cricketer :: get() {
	cout << "Runs : " << Runs << "\tInnings : " << Innings << "\tTimes not out : " << n_out << "\tAverage : " << (float)average << endl;
}

void cricketer :: avg() {
	average=Runs/Innings;
}

int main(int argc,char ** argv) {
	//Enter your code here
	cricketer Sachin, Saurav, Rahul;
	int r,in,nout;
	cout << "Enter the values of Runs, Innings, and Times not out for Sachin: ";
	cin >> r >> in >> nout;
	Sachin.set(r,in,nout);
	Sachin.avg();
	cout << "Enter the values of Runs, Innings, and Times not out for Saurav: ";
	cin >> r >> in >> nout;
	Sachin.avg();
	Saurav.set(r,in,nout);
	cout << "Enter the values of Runs, Innings, and Times not out for Rahul: ";
	cin >> r >> in >> nout;
	Rahul.set(r,in,nout);
	Sachin.avg();
	cout << "\nFor Sachin : " << endl;
	Sachin.get();
	cout << "For Saurav : " << endl;
	Saurav.get();
	cout << "For Rahul : " << endl;
	Rahul.get();
	return(0);
}
