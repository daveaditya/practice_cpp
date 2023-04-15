/*
 * Design a class Polar which describes a point in the p[lane using polar coordinates.
 * Use the overload + operator to add two objects of Polar.
 * Note that we cannot add polar vallues of the two points directly. This requires first the conversion
 * of points into rectangular coordinates, then adding the corresponding rectangular coordnates and
 * finally converting the result back into polar coordinates. You need to use the following trigonometric
 * formulae:
 * x=r*cos(a);
 * y=r*sin(a);
 * a=atan(y/x);	//arc tangent
 * r=sqrt(x*x + y*y);
 */
#include<iostream>
#include<cmath>
using namespace std;

class Polar {
	private:
		float radius;
		float angle;
	public:
		void putdata(float r,float a);
		void getdata(void);
		Polar operator +(Polar temp);
};

void Polar :: putdata(float r,float a) {
	radius=r;
	angle=a;
}

void Polar :: getdata(void) {
	cout << "Radius: " << radius << " Angle: " << angle << endl;
}

Polar Polar :: operator +(Polar temp) {
	Polar t;
	float x,y,x1,y1,x2,y2;
	x1=radius*cos(angle);
	y1=radius*sin(angle);
	x2=temp.radius*cos(temp.angle);
	y2=temp.radius*sin(temp.angle);
	x=x1+x2;
	y=y1+y2;
	t.angle=tan(y/x);
	t.radius=sqrt(x*x + y*y);
	return(t);
}

int main(int argc,char ** argv) {
	//Your code here
	Polar A,B,temp;
	A.putdata(5,20);
	B.putdata(6,10);
	cout << "Object A" << endl;
	A.getdata();
	cout << "\nObject B" << endl;
	B.getdata();
	cout << "\n'+' Operator Overload" << endl;
	temp=A+B;
	temp.getdata();
	return(0);
}
