/*
 * A book shop maintains the inventory of books that are being sold at the shop.
 * The list includes detials such as author, title, price, publisher and stock position.
 * Whenever a customer wants a book, the sales person inputs the title and author and the
 * system searches the list and displays whether it is available or not. If it is not,
 * an appropriate message is displayed. If it is, then the system displays the book details
 * and requests for the number of copies required. If the requested copies are available, the
 * total cost of the requested copies is displayed; otherwise the message "Required copies not
 * in stock" is display.
 *
 * Design a system using a class called Books with suitable member functions and constructors.
 * Use new operator in constructors to allocate memory required.
*/
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class books {
	private:
		int a_len,t_len,p_len;
		char *author;
		char *title;
		char *publisher;
		float price;
		int stock;
	public:
		static int count;
		books();
		books(char *aut,char *tit,char *pub,float pri,int stk);
		void putdata(char *aut,char *tit,char *pub,float pri,int stk);
		void insert();
		int friend search(books *temp,int num_books);
		float r_price(void);
		int r_stk(void);
		void display(void);
		void friend create(books *set,int num_books);
};

books :: books() {
	a_len=t_len=p_len=0;
	author=new char[a_len];
	title=new char[t_len];
	publisher=new char[p_len];
	price=stock=0;
}

books :: books(char *aut,char *tit,char *pub,float pri,int stk) {
	a_len=strlen(aut);
	t_len=strlen(tit);
	p_len=strlen(pub);
	author=new char[a_len];
	title=new char[t_len];
	publisher=new char[p_len];
	strcpy(author,aut);
	strcpy(title,tit);
	strcpy(publisher,pub);
	price=pri;
	stock=stk;
}

void books :: putdata(char *aut,char *tit,char *pub,float pri,int stk) {
	a_len=strlen(aut);
	t_len=strlen(tit);
	p_len=strlen(pub);
	author=new char[a_len];
	title=new char[t_len];
	publisher=new char[p_len];
	strcpy(author,aut);
	strcpy(title,tit);
	strcpy(publisher,pub);
	price=pri;
	stock=stk;
}

void books :: insert(void) {
	char aut[15],tit[15],pub[15];
	cout << "Enter name of author: ";
	cin >> aut;
	a_len=strlen(aut);
	cout << "Enter the title: ";
	cin >> tit;
	t_len=strlen(tit);
	cout << "Enter the name of publisher: ";
	cin >> pub;
	p_len=strlen(pub);
	cout << "Enter the price: ";
	cin >> price;
	cout << "Enter the stock in shop: ";
	cin >> stock;
	author=new char[a_len+1];
	title=new char[t_len+1];
	publisher=new char[p_len+1];
	strcpy(author,aut);
	strcpy(title,tit);
	strcpy(publisher,pub);
}

void books :: display(void) {
	cout << title
			<< "\t" << author
			<< "\t" << publisher
			<< "\t\t" << price
			<< "\t" << stock << endl;
}

int search(books *temp,int num_books) {
	int res_tit,res_aut;
	char s_tit[15],s_aut[15];
	cout << "Enter the book's title: ";
	cin >> s_tit;
	cout << "Enter the book's author: ";
	cin >> s_aut;
	for(int i=0;i<num_books;i++)
	 {
			res_tit=strcmp(temp[i].title,s_tit);
			res_aut=strcmp(temp[i].author,s_aut);
			if( res_tit==0 && res_aut==0) {
				return(i);
			}
	}
	return(-1);
}

float books :: r_price(void) {
	return(price);
}

int books :: r_stk(void) {
	return(stock);
}

void create(books *set,int num_books) {
	int state=books::count;
	for(int i=books::count;i<(state+num_books);i++) {
		cout << "\nEnter details of book ... " << books::count+1 << endl << endl;
		set[i].insert();
		books::count++;
	}
}

int books :: count=0;

int main(int argc,char ** argv) {
	//Your code here
	int num_books,choice,res_search,req_stk;
	books *set_1=NULL;
	while(1) {
		cout << "\nMenu" << endl
				<< "1. Insert" << endl
				<< "2. Search" << endl
				<< "3. Buy" << endl
				<< "4. List" << endl
				<< "5. Exit" << endl;
		cout << "\nEnter choice: ";
		cin >> choice;
		switch(choice) {
			case 1:
				cout << "\nEnter the number of books: ";
				cin >> num_books;
				set_1=new books[num_books];
				create(set_1,num_books);
				break;
			case 2:
				res_search=search(set_1,num_books);
				if(res_search!=-1) {
					cout << "In Stock." << endl;
				}
				else {
					cout << "Not in stock." << endl;
				}
				break;
			case 3:
				res_search=search(set_1,num_books);
				if(res_search!=-1) {
					cout << "\nEnter the required quantity: ";
					cin >> req_stk;
					if(req_stk<=set_1[res_search].r_stk()) {
						cout << "In stock" << endl;
						cout << "Total amount= " << req_stk*set_1[res_search].r_price() << endl;
					}
					else {
						cout << "Required quantity not matched." << endl;
					}
				}
				else {
					cout << "\nNot in store!" << endl;
				}
				break;
			case 4:
				cout << "\nInventory..." << endl << endl;
				cout << "Title\tAuthor\tPublisher\tPrice\tStock" << endl << endl;
				for(int i=0;i<books::count;i++) {
					set_1[i].display();
				}
				break;
			case 5:
				return(0);
			default:
				cout << "Wrong input!" << endl;
		}
	}
	return(0);
}
