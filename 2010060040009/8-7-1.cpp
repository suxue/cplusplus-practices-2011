#include <iostream>
using namespace std;
class Point{
	private:
		int X,Y;
	public:
		Point(int x,int y)
		{
			X=x;
			Y=y;
		}
};
class Rectangle : protected Point
{
	private:
		int high;
		int width;
	public:
		Rectangle(int x,int y, int w , int h):Point(x,y)
		{
			width=w;
			high=h;
		}
		int area(){
			return width*high;
		}
};

class Circle : protected Point
{
	private:
		double radius;
	public:
		Circle(int x, int y, double r):Point(x,y)
		{
			radius=r;
		}
		double area(){
			return 3.14*radius*radius;
		}
};
int main()
{
	Rectangle R(1,2,3,4);
	cout<<"Rectangle's area:"<<R.area()<<endl;
	Circle C(2,3,4);
	cout<<"Circle's area:"<<C.area()<<endl;
	return 0;
}
