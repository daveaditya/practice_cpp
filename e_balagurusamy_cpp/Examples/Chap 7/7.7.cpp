//Data Conversions.
#include<iostream>
using namespace std;

class invent2;

class invent1 {
	private:
		int code;
		int items;
		float price;
	public:
		invent1(int a,int b,float c) {
			code=a;
			items=b;
			price=c;
		}
		void putdata() {
			cout << "Code: " << code << "\n";
			cout << "Items: " << items << "\n";
			cout << "Value: " << price << "\n";
		}
		int getcode() {
			return(code);
		}
		int getitems() {
			return(items);
		}
		float getprice() {
			return(price);
		}
		operator float() {
			return(items*price);
		}
//		invent2 operator invent2() {
//			invent2 temp;
//			temp.code=code;
//			temp.value=price*items;
//			return(temp);
//		}
};

class invent2 {
	private:
		int code;
		float value;
	public:
		invent2() {
			code=0;
			value=0;
		}
		invent2(int x,float y) {
			code=x;
			value=y;
		}
		void putdata() {
			cout << "Code: " << code << "\n";
			cout << "Value: " << value << "\n\n";
		}
		invent2(invent1 p) {
			code=p.getcode();
			value=p.getitems();
		}
};

int main(int argc,char ** argv) {
	//Your code here
	invent1 s1(100,5,140.0);
	invent2 d1;
	float total_value=s1;

	total_value=s1;

	d1=s1;

	cout << "Product Details-invent1 type" << "\n";
	s1.putdata();

	cout << "\nStock value" << "\n";
	cout <<"Value= " << total_value << "\n\n";

	cout << "Product details-invent2 type" << "\n";
	d1.putdata();

	return(0);
}
