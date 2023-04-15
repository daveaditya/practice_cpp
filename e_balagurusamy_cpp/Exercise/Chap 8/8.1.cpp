/*
 * Assume that a bank maintains two kinds of accounts for contumers, one called as savings account
 * and the other as current account. The savings account provides compund interest and withdrawal facilities
 * but no cheque book facility. The current account provides cheque book facility but no interest.
 * Current account holders should also maintain a minimum balance and if the balance falls below this level, a service
 * charge is imposed.
 *
 * Create a class account that stores customer name, account name and type of account. From this, derive the classes cur_Acct
 * and sav_acct to amke them more specific to their requirements. Include necessary member functions in order to achieve the
 * following tasks:
 *
 * 1. Accept deposit from a customer and update the balance.
 * 2. Display the balance.
 * 3. Compute and deposit interest.
 * 4. Permit withdrawal and update the balance.
 * 5. Check for minimum balance, impose penalty , necessary , and update the balance.
 *
 * Do not use any constructors. Use member functions to initialize the class members.
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
		void display(void);
		float bal(void);
		void insert(char *n,int acc,float bal,char *type);
		void deposit(float bal);
};

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

void account :: insert(char *n,int acc,float bal,char *type) {
	name=n;
	acc_no=acc;
	balance=bal;
	type_acc=type;
}

void account :: deposit(float bal) {
	balance=balance+bal;
}

class sav_acct : public account {
	private:

	protected:
		static float int_rate;
	public:
		friend void compund_int(sav_acct &temp,int n,int t);
		void withdraw(float money_with);
};

float sav_acct :: int_rate=0.15;

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
		cout << "Transaction Successful";
	}
}

class cur_acct : public account {
	private:

	protected:

	public:
		friend int min_balance(float bal);
		void withdraw(float money_with);
};

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
	sav_acct C1;
	C1.insert((char *)"ABC",111,15000,(char *)"Savings");
	C1.display();
	C1.deposit(500.00);
	C1.withdraw(122200.00);
	C1.display();
	compund_int(C1,2,3);
	C1.display();
	cout << endl << "Current Account" << endl;
	cur_acct C2;
	C2.insert((char *)"XYZ",222,23500,(char *)"Current");
	C2.display();
	C2.deposit(320);
	C2.withdraw(5632);
	C2.display();
	return(0);
}
