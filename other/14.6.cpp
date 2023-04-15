//Perform program 14.5 using set.
#include<iostream>
#include<vector>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;

class Student {
	private:
		char *name;
		int roll_number;
	public:
		Student();
		Student(char *n,int roll);
		~Student();
		void ins(char *n,int roll);
		void display(void);
		friend int find(set <Student> :: iterator it,char *n);
		friend int find(set <Student> :: iterator it,int roll);
};

Student :: Student() {
	name=NULL;
	roll_number=0;
}

Student :: Student(char *n,int roll) {
	name=n;
	roll_number=roll;
}

Student :: ~Student() {
	cout << "Student destructor" << endl;
}

void Student :: ins(char *n,int roll) {
	name=n;
	roll_number=roll;
}

void Student :: display(void) {
	cout << "Name: " << name << endl;
	cout << "Roll No.: " << roll_number << endl;
}

//int find(list <Student> :: iterator it,char *n) {
//	if(it->name==n) {
//		return(1);
//	}
//	else {
//		return(0);
//	}
//}

//int find(list <Student> :: iterator it,int roll) {
//	if(it->roll_number==roll) {
//		return(1);
//	}
//	else {
//		return(0);
//	}
//}

ostream& operator <<(ostream &ne,vector< set <int>> :: iterator it) {
	set <int> n=*it;
	set <int> :: iterator m=n.begin();
	ne << (*m);
	return(ne);
}

template <class t>
class integerFromVector : public vector <t> {
	public:
		vector <int> a;
		integerFromVector(vector <int> temp) {
			a=temp;
		}
		operator int() {
			vector <int> :: iterator it3=a.begin();
			return(*it3);
		}
};

int main(int argc,char ** argv) {
	//Your code here

	vector<set<int>> no(5);
	vector <set<int>> :: iterator it1=no.begin();

	for(it1=no.begin();it1!=no.end();it1++) {
		it1->insert(10);
	}
	it1=no.begin();
	set<int> n=*it1;
	set <int> :: iterator ny=n.begin();
//	cout << (*ny);

	cout << it1;

	cout << "\nNew" << endl << endl;
	vector <int> a;
	a.push_back(20);
	integerFromVector <int> b=a;
	cout << "a: " << b;

//	for(it1=no.begin();it1!=no.end();it1++) {
//		cout << (*it1);
//	}

//	vector<set <Student>> stud(5);
//	vector <set<Student>> :: iterator it=stud.begin();


//	cout << std.size();
//	int roll;
//	cout << "Entries" << endl << endl;
//	for(it=std.begin();it!=std.end();it++) {
//		it->display();
//	}
//	cout << "Enter a student's roll number: ";
//	cin >> roll;
//	int pre=0;
//	for(it=std.begin();it!=std.end();it++) {
//		pre=find(it,roll);
//	}
//	if(pre==1) {
//		cout << "Student present" << endl;
//	}
//	else {
//		cout << "Student not found" << endl;
//	}
//	int pre1=0;
//	char name[10];
//	cout << "Enter name: ";
//	cin >> name;
//	for(it=std.begin();it!=std.end();it++) {
//		pre1=find(it,name);
//	}
//	if(pre1==1) {
//		cout << "Student present" << endl;
//	}
//	else {
//		cout << "Student not found" << endl;
//	}
	return(0);
}
