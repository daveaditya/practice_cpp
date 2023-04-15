/*
 * A table gives a list of car models and the number of units sold in each type in a specified period.
 * Write a program to store this table in a suitable container, and to display interactively the total value of a
 * particular model sold, given the unit-cost of that model.
 */
#include<iostream>
#include<list>
using namespace std;

class carModel {
	private:
		char *modelName;
		int unitSold;
	public:
		carModel() {
			modelName=new char[10];
			unitSold=0;
		}
		carModel(char *name,int unit) {
			modelName=new char[10];
			modelName=name;
			unitSold=unit;
		}
		carModel(carModel &temp) {
			modelName=new char[10];
			modelName=temp.modelName;
			unitSold=temp.unitSold;
		}
		~carModel() {
			cout << "Model Destructor" << endl;
		}
		void setter(char *name,int unit) {
			modelName=new char[10];
			modelName=name;
			unitSold=unit;
		}
		void display(void) {
			cout << "Model Name: " << modelName << endl;
			cout << "Units Sold: " << unitSold << endl;
		}
};

using namespace std;

int main(int argc,char ** argv) {
	//Your code here
	list <carModel> models(2);
	list <carModel> :: iterator it=models.begin();
	it->setter((char *)"ABC",111);
	it++;
	it->setter((char *)"XYZ",222);
	it=models.begin();
	while(it!=models.end()) {
		it->display();
		it++;
	}

//	carModel n((char *)"ABC",111);
//	n.display();
	return(0);
}
