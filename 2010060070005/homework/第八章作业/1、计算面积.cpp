#include<iostream>

using namespace std;

class Point{
public:
       Point(float x,float y)
       {
           a=x;
           b=y;
       }
private:
           float a,b;
};
class Rectangle:public Point
{
public:
       Rectangle(float x,float y,float w,float h);
       float Area()
       {
             return width*high;
       }
private:
        float width;
        float high;
};
Rectangle::Rectangle(float x,float y,float w,float h):Point(x,y)
{
     width=w;
     high=h;
}
class Circle:public Point
{
public:
       Circle(float x,float y,float r);
       float Area()
       {
             return 3.14*radius*radius;
       }
private:
        float radius; 
};
Circle::Circle(float x,float y,float r):Point(x,y)
{
      radius=r;
} 
int main(){
    Rectangle R(2,3,4,5);
    cout<<"R.Area()="<<R.Area()<<endl;
    Circle C(10,12,14);
    cout<<"C.Area()="<<C.Area()<<endl;

    system("pause");
}
           

      
