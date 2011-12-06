#include<iostream>
using namespace std;
const double PI=3.14159;
class Point{
private:
 int X,Y;
public:
 Point(int X=0,int Y=0)
 {
     this->X=X,this->Y=Y;
 }
 void move(int CX,int CY)
 {
        X+=CX,Y+=CY;
 }
    void showPoint()
 {
  cout<<"X="<<X<<"Y="<<Y;
 }

}
class Rectangle:public Point
{
private:
 double C,K;
public:
 Rectangle(double C,double K,int X,int Y):Point(X,Y)
 {
  this->C=C;
  this->K=K;
 }
 double area()
 {
  return C*K;
 }
 void showRectangle()
 {
  cout<<"该长方形的左下端点是：";
  showPoint();
  cout<<"该长方形的长是："<<C;
  cout<<"该长方形的宽是："<<K<<endl;
 }

}
class Circle:public Point
{
private:
 double r;
public:
 Circle(double R,int X,int Y):Point(X,Y)
 {
  r=R;
 }
 double area()
 {
  return PI*r*r;
 }
 void showCircle()
 {
  cout<<"该圆的圆心是：";
  showPoint();
  cout<<"该圆的半径是："<<r<<endl;
 }

}
