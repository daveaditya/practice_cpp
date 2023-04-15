//Program for class to represent a bank account. For 10 customers
/*
 * Include the following members:
 * Data Members
 * a. Name of the depositor
 * b. Account number
 * c. Type of account
 * d. Balance amount in the account
 *
 * Member functions
 * a. To assign initial values
 * b. To deposit an amount
 * c. To withdraw an amount after checking the balance
 * d. To display name and balance
 */
#include<iostream>
using namespace std;

class bank {
	private:
		char *name, *acc_type;
		int acc_no;
		double balance=0;
	public:
		void setdata(int accno,char *pname,char *acctype,double amount);
		void deposit(int accno,double amount);
		void withdraw(int accno,double amount);
		void showdata();
};

void bank :: setdata(int accno,char *pname,char *acctype,double amount) {
	acc_no=accno;
	name=pname;
	acc_type=acctype;
	balance=amount;
}

void bank :: deposit(int accno,double amount) {
	balance=balance+amount;
}

void bank :: withdraw(int accno,double amount) {
	if(amount>balance) {
		cout << "Sorry! Insufficient funds." << endl;
	}
	else {
		balance=balance-amount;
		cout << "\nWithdraw successful. The new balance is " << balance << endl ;
	}
}

void bank :: showdata() {
	cout << "\nName: " << name << endl ;
	cout << "Acc_no: " << acc_no << endl ;
	cout << "Acc_type: " << acc_type << endl ;
	cout << "Balance: " << balance << endl ;
}

int main(int argc,char ** argv) {
	//Your code here
	bank A[10];
	char name[]="ABC";
	char acctype[]="Savings";
	A[0].setdata(001,name,acctype,5000.00);
	A[0].showdata();
	A[0].deposit(001,200.00);
	A[0].showdata();
	A[0].withdraw(001,4000);
	A[0].showdata();
	A[0].withdraw(001,3000.00);
	A[0].showdata();
	return(0);
}
