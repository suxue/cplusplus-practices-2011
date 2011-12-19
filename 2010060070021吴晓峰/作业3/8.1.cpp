#include <iostream>
#include <cstdlib>
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
			cout<<"创建点成功。"<<endl;
		}
};

class Rectangle:public Point
{
	public:
		double x1,y1,x2,y2;
		bool isRectangle(double x,double y,double x1,double y1,double x2,double y2)
		{
			double a=sqrt(pow(this->x-this->x1,2)+pow(this->y-this->y1,2));
			double b=sqrt(pow(this->x-this->x2,2)+pow(this->y-this->y2,2));
			double c=sqrt(pow(this->x1-this->x2,2)+pow(this->y1-this->y2,2));
			if((a+b<c)&(a+c<b)&(b+c<a)) 
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		Rectangle(double x,double y,double x1,double y1,double x2,double y2):Point(x,y) 
		{
			this->x1=x1;
			this->y1=y1;
			this->x2=x2;
			this->y2=y2;
			
			if(isRectangle(x,y,x1,y1,x2,y2))
			{
				cout<<"创建三角形成功。"<<endl;
			}
			else
			{
				cout<<"这些点不能构成一个三角形。"<<endl;
			}
		}
		
		double Area()
		{
			double a=sqrt(pow(this->x-this->x1,2)+pow(this->y-this->y1,2));
			double b=sqrt(pow(this->x-this->x2,2)+pow(this->y-this->y2,2));
			double c=sqrt(pow(this->x1-this->x2,2)+pow(this->y1-this->y2,2));
			double p=(a+b+c)/2;
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
};

class Circle:public Point
{	
	public:
		double r;
		double PI;
		Circle(double x,double y,double r):Point(x,y)
		{
			this->r=r;
			this->PI=3.14;
			if(r>0)
			{
				cout<<"创建圆成功。"<<endl;
			} 
			else
			{
				cout<<"圆的半径输入非法。"<<endl;
			}
		}
		
		double Area()
		{
			return this->PI*pow(this->r,2);
		}
};

int main()
{
	Point p(0,0);
	Rectangle r(0,0,1,1,0,2);
	Circle c(0,0,4);
	cout<<"三角形的面积为："<<r.Area()<<endl;
	cout<<"圆的面积为："<<c.Area()<<endl;
	return 0; 
}
