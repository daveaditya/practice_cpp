//File Uploading :: Random Access
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class INVENTORY {
	private:
		char name[10];
		int code;
		float cost;
	public:
		void getdata(void) {
			cout << "Enter name: ";
			cin >> name;
			cout << "\nEnter code: ";
			cin >> code;
			cout << "\nEnter cost: ";
			cin >> cost;
		}
		void putdata(void) {
			cout << setw(10) << name
					<< setw(10) << code
					<< setprecision(2) << setw(10) << cost
					<< endl;
		}
};

int main(int argc,char ** argv) {
	//Your code here
	INVENTORY item;
	fstream inoutfile;
	inoutfile.open("STOCK.DAT,ios::ate|ios::in|ios::out|ios::binary");
	cout << "Current contents of stock" << endl;
	while(inoutfile.read((char *) &item,sizeof(item))) {
		item.putdata();
	}
	inoutfile.close();

	cout << "\nAdd an item" << endl;
	item.getdata();
	char ch;
	cin.get(ch);
	inoutfile.write((char *) &item,sizeof(item));

	inoutfile.seekg(0);
	cout << "Contents of Append File" << endl;
	while(inoutfile.read((char *) &item,sizeof(item))) {
		item.putdata();
	}

	int last=inoutfile.tellg();
	int n=last/sizeof(item);
	cout << "Number of objects = " << n << endl;
	cout << "Total bytes in the file = " << last << endl;

	cout << "Enter object number to be updated" << endl;
	int object;
	cin >> object;
	cin.get(ch);
	int location=(object-1)*sizeof(item);
	if(inoutfile.eof()) {
		inoutfile.clear();
	}
	inoutfile.seekp(location);
	cout << "Enter new values of the object" << endl;
	item.getdata();
	cin.get(ch);
	inoutfile.write((char *) &item,sizeof(item)) << flush;

	inoutfile.seekg(0);
	cout << "Contents of Updated file" << endl;
	while(inoutfile.read((char *) &item,sizeof(item))) {
		item.putdata();
	}
	inoutfile.close();
	return(0);
}
