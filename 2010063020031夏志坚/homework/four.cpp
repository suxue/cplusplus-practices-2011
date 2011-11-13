//����һ��point�࣬��������Rectangle��Circle�࣬�������������������� 
#include<iostream>
using namespace std;
 const float PI=3.14;//��̬����pi-Բ���ʡ� 
class Point
{
private:
       float x,y;//���x��y���ꡣ 
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
	   virtual float Area()=0;//���崿�麯��������� 
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
       float r;//�뾶����r�� 
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
	
	cout<<"�������Ϊ:"<<r.Area()<<endl;
	
	Circle c(1.0);
	cout<<"Բ�����Ϊ:"<<c.Area()<<endl;
	return 1; 
}
