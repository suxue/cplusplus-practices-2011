//定义一个point类，并派生出Rectangle和Circle类，并计算派生类对象面积； 
#include<iostream>
using namespace std;
 const float PI=3.14;//静态变量pi-圆周率。 
class Point
{
private:
       float x,y;//点的x与y坐标。 
public:
       Point(float x,float y)
	   {
	   	  this->x=x;
	   	  this->y=y;
	   }
	   virtual ~Point(){}
	   void set(float x,float y)
	   	{
	   		this->x=x;
	   		this->y=y;
	   }
	   float getX()
	   {
   		   return x;
   	   }
   	   float getY()
   	   {
   	   	  return y;
   	   }
	   virtual float Area()=0;//定义纯虚函数求面积。 
};
class Rectangle:public Point
{
public:
      Rectangle(float x,float y):Point(x,y)
	  {
	  	  ;
	  }
      
      float Area()
      {
      	  return getX()*getY();
      }
	 
};

class Circle
{

private:
       float r;//半径变量r。 
public:
      Circle(float r=0.0)
      {
      	this->r=r;
      }
      float Area()
      {
      	  return PI*r*r;
      }
};
int main()
{
	Rectangle r(3.0,4.0);
	
	cout<<"矩形面积为:"<<r.Area()<<endl;
	
	Circle c(1.0);
	cout<<"圆的面积为:"<<c.Area()<<endl;
	return 1; 
}
