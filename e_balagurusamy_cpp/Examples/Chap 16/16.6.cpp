//Using Classes in Namespace Scope.
#include<iostream>
using namespace std;

namespace Classes {
	class Test {
		private:
			int m;
		public:
			Test(int a) {
				m=a;
			}
			void display() {
				cout << "m= " << m << endl;
			}
	};
}

int main(int argc,char ** argv) {
	//Your code here
	Classes ::Test T1(200);
	T1.display();

	using namespace Classes;
	Test T2(400);
	T2.display();

	return(0);
}
