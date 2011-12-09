#include<iostream>
#include<cmath>
using namespace std;

class Point{
	private:
		int a,b;
	public:
		Point(int x,int y):a(x),b(y){}
	
};
class Rectangle: public Point
{
	private:
		int width,length;
	public:
		Rectangle(int x,int y,int w,int l):Point(x,y),width(w),length(l){}
		double Area(){
			return width*length;
		}
};
class Circle:public Point
{
	private:
		double Radius;
	public:
		Circle(int x,int y,int r):Point(x,y),Radius(r){}
		double Area(){
			return Radius*Radius*acos(-1.0);
		}
	
};


int main()
{
	Rectangle rec(0,0,4,5);
	cout<<"Rectangle.Area()="<<rec.Area()<<endl;
	Circle c(0,0,3);
	cout<<"Circle.Area()="<<c.Area()<<endl;
}