/*
 * Modify the program of Exercise 8.1 to include constructores for all the three classes.
 */
#include<iostream>
#include<cmath>
using namespace std;

class account {
	private:

	protected:
		char *name;
		int acc_no;
		float balance;
		char *type_acc;
	public:
		account();
		account(char *n,int acc,float bal,char *t);
		~account();
		void display(void);
		float bal(void);
		void insert(char *n,int acc,float bal,char *type);
		void deposit(float bal);
};

account :: account() {
	name=NULL;
	acc_no=0;
	balance=0;
	type_acc=NULL;
}

account :: account(char *n,int acc,float bal,char *t) {
	name=n;
	acc_no=acc;
	balance=bal;
	type_acc=t;
}

account :: ~account() {
	cout << "Account destructor";
}

void account :: display(void) {
	cout << "\n\nAccount Details" << endl << endl;
	cout << "Name of Account Holder: " << name << endl;
	cout << "Account No.: " << acc_no << endl;
	cout << "Account Type: " << type_acc << endl;
	cout << "Current Balance: " << balance << endl;
}

float account :: bal(void) {
	return(balance);
}

void account :: insert(char *n,int acc,float bal,char *t) {
	name=n;
	acc_no=acc;
	balance=bal;
	type_acc=t;
}

void account :: deposit(float bal) {
	balance=balance+bal;
}

class sav_acct : public account {
	private:

	protected:
		static float int_rate;
	public:
		sav_acct();
		sav_acct(char *n,int acc,float bal,char *t,);
		~sav_acct();
		friend void compund_int(sav_acct &temp,int n,int t);
		void withdraw(float money_with);
};

float sav_acct :: int_rate=0.15;

sav_acct :: sav_acct() {
	account();
}

sav_acct :: sav_acct(char *n,int acc,float bal,char *t) {
	account(n,acc,bal,t);
}

sav_acct :: sav_acct() {
	cout << "Savings account destructor";
}

void compund_int(sav_acct &temp,int n,int t) {
	float amount;
	amount=temp.balance*(pow((1+(temp.int_rate/n)),(n*t)));
	temp.balance=temp.balance+amount;
}

void sav_acct :: withdraw(float money_with) {
	if(money_with>balance) {
		cout  << "\nInsufficient funds.\nTransaction Unsuccessful";
		return;
	}
	else {
		balance=balance-money_with;
		cout << "\nTransaction Successful";
	}
}

class cur_acct : public account {
	private:

	protected:

	public:
		cur_acct();
		cur_acct(char *n,int acc,float bal,char *t);
		~cur_acct();
		friend int min_balance(float bal);
		void withdraw(float money_with);
};

cur_acct :: cur_acct() {
	account();
}

cur_acct :: cur_acct(char *n,int acc,float bal,char *t) {
	account(n,acc,bal,t);
}

cur_acct :: ~cur_acct() {
	cout << "Current account destructor";
}

int min_balance(float bal) {
	if(bal<1000) {
		return(1);
	}
	else {
		return(0);
	}
}

void cur_acct :: withdraw(float money_with) {
	if(money_with>balance) {
		cout  << "Insufficient funds.";
		return;
	}
	else {
		float baln=bal()-money_with;
		if((min_balance(baln))) {
			cout << "Withdrawal leads to violation of minimum balanced required" << endl;
			cout << "Penalty will be imposed.\nDo you want to continue? (1 for yes or 0 for no)";
			int yes;
			cin >> yes;
			if(yes) {
				cout << "\nPenaly imposed";
				return;
			}
			else {
				cout << "Transaction aborted by user" << endl;
				return;
			}
		}
		else {
			balance=balance-money_with;
			cout << "Transaction Successful";
		}
	}
}

int main(int argc,char ** argv) {
	//Your code here
	cout << "Savings Account" << endl;
	sav_acct C1((char *)"ABC",111,15000,(char *)"Savings");
	C1.display();
	C1.deposit(500.00);
	C1.withdraw(122200.00);
	C1.display();
	compund_int(C1,2,3);
	C1.display();
	cout << endl << "Current Account" << endl;
	cur_acct C2((char *)"XYZ",222,23500,(char *)"Current");
	C2.display();
	C2.deposit(320);
	C2.withdraw(5632);
	C2.display();
	return(0);
}
