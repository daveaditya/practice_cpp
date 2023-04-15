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
		Student(Student *temp) {
			name=temp->name;
			roll_number=temp->roll_number;
		}
		~Student();
		void ins(char *n,int roll);
		void display(void);
		char* _name(void) {
			return(name);
		}
		int _roll(void) {
			return(roll_number);
		}
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

void operator <<(ostream &ne,vector< set <Student>> :: iterator it) {
	set <Student> n=*it;
	set <Student> :: iterator m=n.begin();
	Student a=*m;
	m->display();
//	ne << a._name();
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

	vector<set <Student>> stud(5);
	vector <set<Student>> :: iterator it=stud.begin();

	it->insert(Student((char *)"ABC",11));
	cout << it;



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
