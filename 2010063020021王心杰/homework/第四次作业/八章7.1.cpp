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
  cout<<"�ó����ε����¶˵��ǣ�";
  showPoint();
  cout<<"�ó����εĳ��ǣ�"<<C;
  cout<<"�ó����εĿ��ǣ�"<<K<<endl;
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
  cout<<"��Բ��Բ���ǣ�";
  showPoint();
  cout<<"��Բ�İ뾶�ǣ�"<<r<<endl;
 }

}
