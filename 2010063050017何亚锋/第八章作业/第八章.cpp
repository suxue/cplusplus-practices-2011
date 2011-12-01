//============================================================================
// Name        : ╣з╟куб.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<math.h>
using namespace std;
class Point{
private:
	int X,Y;
public:
	Point(int X=0,int Y=0){
		this->X=X;
		this->Y=Y;
	}
	double area(){
		return 0;
	}
};

class Rectangle:public Point{
private:
	double a,b;
public:
	Rectangle(int X,int Y,double a,double b):Point(X,Y){
		this->a=a;
		this->b=b;
	}
	double area(){
		return a*b;
	}
};
class Circle:public Point{
private:
	double radius;
public:
	Circle(int X,int Y,double radius):Point(X,Y){
		this->radius=radius;
	}
	double area(){
		return 3*acos(0.5)*pow(radius,2);
	}
};

int main() {
	Point point(10,10);
	cout<<"P.area()= "<<point.area()<<endl;
	Circle circle(10,10,5);
	cout<<"C.area()="<<circle.area()<<endl;
	Rectangle rectangle(10,10,3,4);
	cout<<"R.area()="<<rectangle.area();

	return 0;
}
