//Runtime Polymorphism.
#include<iostream>
#include<cstring>
using namespace std;

class media {
	private:

	protected:
		char title[50];
		float price;
	public:
		media(char *s,float a) {
			strcpy(title,s);
			price=a;
		}
		virtual void display() {

		}

};

class book : public media {
	private:
		int pages;
	protected:

	public:
		book(char *s,float a,int p) : media(s,a) {
			pages=p;
		}
		void display();
};

class tape : public media {
	private:
		float time;
	protected:

	public:
		tape(char *s,float a,float t) : media(s,a) {
			time=t;
		}
		void display();
};

void book :: display() {
	cout << "\nTitle: " << title << endl;
	cout << "Pages: " << pages << endl;
	cout << "Price: " << price << endl;
}

void tape :: display() {
	cout << "Title: " << title << endl;
	cout << "Play time: " << time << " mins" << endl;
	cout << "Price: " << price << endl;

}

int main(int argc,char ** argv) {
	//Your code here
	char *title=new char[30];
	float price,time;
	int pages;

	cout << "Enter books details" << endl;
	cout << "Title: ";
	cin >> title;
	cout << "Price: ";
	cin >> price;
	cout << "Pages: ";
	cin >> pages;

	book book1(title,price,pages);

	cout << "Enter tape details" << endl;
	cout << "Title: ";
	cin >> title;
	cout << "Price: ";
	cin >> price;
	cout << "Play time (min): ";
	cin >> time;
	tape tape1(title,price,time);

	media *list[2];
	list[0]=&book1;
	list[1]=&tape1;

	cout << "Media Details..." << endl;
	cout << "\n.....BOOK.....";
	list[0]->display();
	cout << "\n.....TAPE....." << endl;
	list[1]->display();

	return(0);
}
