#include<iostream>
using namespace std;
class Point
{
	private:
	 int x,y;
    public:
     Point(int x=0,int y=0)
     {
     	this->x=x,	this->x=x;
     }
     void move(int offX,int offY)
     {
     	x+=offX,y+=offY;
     }
     void showXY()
     {
     	cout<<"("<<x<<","<<y<<")"<<endl;
     }
};
const double PI=3.1415926;
class Circle:public Point
{
	private:
	  double radius;
    public:
       Circle(double R,int x,int y):Point(x,y)
       {
       	radius=R;
       }
      double Area()
      {
      	return PI*radius*radius;
      }
      void ShowCircle()
      {
      	cout<<"centre of circle:";
      	showXY();
      	cout<<"radius:"<<radius<<endl;
      }
};

class Rectangle:public Point
{
	private:
	  double Long,wide;
    public:
      Rectangle(double l,double w,int x,int y):Point(x,y)
       {
        Long=l,wide=w;
       }
      double Area()
      {
      	return Long*wide;
      }
      void ShowRectangle()
      {
      	cout<<"centre of Rectangle:";
      	showXY();
      	cout<<"long:"<<Long<<"wide:"<<wide<<endl;
      }
};

int main()
{
	double r,l,w;
	Point P();
	cout<<"in the radius:"<<endl;
	cin>>r;
	Circle C(r,0,0);
	cout<<"area of circle:"<<C.Area()<<endl;
	cout<<"in the long:"<<endl;
	cin>>l;
	cout<<"in the wide:"<<endl;
	cin>>w;
	Rectangle R(l,w,0,0);
	cout<<"area of Rectangle :"<<R.Area()<<endl;
	system("pause");
}
