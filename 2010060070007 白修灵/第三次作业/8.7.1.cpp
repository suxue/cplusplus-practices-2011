#include <iostream>
#include <math.h>
using namespace std;
class Point
{
	public:
		double x,y;
		Point(double x,double y)
		{
			this->x=x;
			this->y=y;
		}
};
class Rectangle: public Point
{
	public:
		Rectangle(double x,double y,double w,double l):Point(x,y),width(w),length(l){}
		double Area(){
			return width*length;
		}
	private:
		double width,length;
};
class Circle:public Point
{
	public:
		Circle(double x,double y,double r):Point(x,y),Radius(r){}
		double Area(){
			return Radius*Radius*acos(-1.0);
		}
	private:
		double Radius;
};


int main()
{
	Rectangle r(0,0,7,5);
	cout<<"the rectangle's area is "<<r.Area()<<endl;
	Circle c(0,0,7);
	cout<<"the circle's area is "<<c.Area()<<endl;
}