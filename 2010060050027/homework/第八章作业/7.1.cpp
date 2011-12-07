#include<iostream>
#include<cmath>
#define Pi acos(-1)
using namespace std;

class point
{
      private:
              int x,y;
      public:
             point(){};
             point(int _x,int _y)
             {
                 x=_x;
                 y=_y;
             }
             void Area();
}; 

class Rectangle: public point
{
      private:
              int L,H;
      public:
             Rectangle(int _L,int _H) :point()
             {
                 L=_L;
                 H=_H;
                 cout<<"生成一个矩形（"<<L<<","<<H<<"）" <<endl;
             }
             void Area()
             {
               cout<<"矩形面积为"<<H*L<<endl;
             }
};

class Circle: public point
{
      private:
              int R;
      public:
             Circle(int r,int x,int y):point(x,y)
             {
               R=r;
               cout<<"生成一个圆（"<<x<<","<<y<<"）,R="<<R<<endl;
             }
             void Area()
             {
               cout<<"圆的面积为"<<Pi*R*R<<endl;
             }
};

int main()
{
  Circle circle(4,1,2);
  Rectangle L(3,4);
  circle.Area();
  L.Area();
  while(2);
}
