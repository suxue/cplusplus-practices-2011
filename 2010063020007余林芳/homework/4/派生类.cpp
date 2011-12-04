#include<iostream>
#include<cmath>
using namespace std;

class Point{
	public:
		Point(int x,int y):x0(x),y0(y){}
	private:
		int x0,y0;
};
class Rectangle: public Point
{
	public:
		Rectangle(int x,int y,int w,int l):Point(x,y),width(w),length(l){}
		double Area(){
			return width*length;
		}
	private:
		int width,length;
};
class Circle:public Point
{
	public:
		Circle(int x,int y,int r):Point(x,y),Radius(r){}
		double Area(){
			return Radius*Radius*acos(-1.0);
		}
	private:
		double Radius;
};


int main()
{
	Rectangle rec(0,0,3,6);
	cout<<"rec.Area()="<<rec.Area()<<endl;
	Circle c(0,0,2);
	cout<<"c.Area()="<<c.Area()<<endl;
}
