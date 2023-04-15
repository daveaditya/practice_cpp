/*
 * Write a class template to represent a generic vector. Include member funcitons to perform the
 * following tasks:
 *
 * 1. To create the vector.
 * 2. To modify the value of a given element.
 * 3. To multiply by a scalar value.
 * 4. To display the vector int he form (10,20,30,...)
 */
#include<iostream>
using namespace std;

template <class T>
class vector {
	private:
		T *vect;
		int size;
	public:
		vector();
		vector(T temp[],int len);
		~vector();
		void modify(T new_ele,int pos);
		template<class U>
			friend U multiply_scalar (vector <U> t1[],vector <U> t2[]) ;
//			T result=0;
//				if(t1->size!=t2->size) {
//					cout << "Operation cannot be completed!" << endl;
//					return(1);
//				}
//				for(int i=0;i<t1->size;i++) {
//					result=result+t1->vect[i]*t2->vect[i];
//				}
//				return(result);
//			}
		void display(void);
};

template <class T>
vector <T> :: vector() {
	size=0;
	vect=new T[size];
}

template <class T>
vector <T> :: vector(T temp[],int len) {
	size=len;
	vect=new T[size];
	for(int i=0;i<size;i++) {
		vect[i]=temp[i];
	}
}

template <class T>
vector <T> :: ~vector() {
	cout << "Vector destructor" << endl;
}

template <class T>
void vector <T> :: modify(T new_ele,int pos) {
	if(pos>size) {
		cout << "Out of range";
		return;
	}
	vect[pos-1]=new_ele;
}

template <class U>
U multiply_scalar (vector <U> t1[],vector <U> t2[]) {
	U result=0;
	if(t1->size!=t2->size) {
		cout << "Operation cannot be completed!" << endl;
		return(1);
	}
	for(int i=0;i<t1->size;i++) {
		result=result+t1->vect[i]*t2->vect[i];
	}
	return(result);
}

template <class T>
void vector <T> :: display(void) {
	cout << "( ";
	for(int i=0;i<size;i++) {
		cout << vect[i] << " ";
	}
	cout << ")" << endl << endl;
}

int main(int argc,char ** argv) {
	//Your code here
	int arr1[3]={1,2,3};
	int arr2[3]={1,2,3};
	vector <int> v1(arr1,3);
	vector <int> v2(arr2,3);
	cout << "Vector 1" << endl << endl;
	v1.display();
	cout << "Vector 2" << endl << endl;
	v2.display();
	int result=multiply_scalar(&v1,&v2);
	cout << "Scalar Multiplication: " << result;
	cout << "\n\nModify v2" << endl;
	v2.modify(10,1);
	v2.display();
	return(0);
}
