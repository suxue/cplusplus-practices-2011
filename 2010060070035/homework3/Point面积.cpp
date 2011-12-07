#include<iostream.h>
//¼ÆËãÃæ»ý 
class Point
{
public:
	Point(float _x,float _y)
	{
		x=_x;
		y=_y;
	}
private:
	float x;
	float y;
};

class Rectangle:public Point
{
public:
	Rectangle(float _x,float _y,float _w,float _h);
	float Area()
	{
		return width*high;
	}
private:
	float width;
	float high;
};
Rectangle::Rectangle(float _x,float _y,float _w,float _h):Point(_x,_y)
{
	width=_w;
	high=_h;
}


class Circle:public Point
{
public:
	Circle(float _x,float _y,float _r);
	float Area()
	{
		return 3.14*radius*radius;
	}
private:
	float radius;
};
Circle::Circle(float _x,float _y,float _r):Point(_x,_y)
{
	radius=_r;
}



int main()
{
	Rectangle R(2,5,4,7);
	cout<<"R.area="<<R.Area()<<endl;
	
	Circle C(3,4,9);
	cout<<"C.area="<<C.Area()<<endl;
	
	return 0;
}