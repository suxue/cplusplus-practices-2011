#include <iostream>

using namespace std;

class Point
{
    private:
    float X;
    float Y;
    public:
    Point(float x,float y)
    {
       X=x;
       Y=y;
    }
};
class Rectangle:public Point
{
        private:
        int width;
        int high;
        public:
        Rectangle(float x,float y,float w,float h):Point(x,y)
        {
            width=w;
            high=h;
        }
        float Area()
        {
            return width*high;
        }

};
class Circle:public Point
{
    private:
    float radius;
    public:
    Circle(float x,float y,float r):Point(x,y)
    {
        radius=r;
    }
    float Area()
    {
        return 3.14*radius*radius;
    }
};

int main()
{
    Rectangle R(1,2,3,4);
    cout<<"R.Area()="<<R.Area()<<endl;
    Circle C(5,6,7);
    cout<<"C.Area()="<<C.Area()<<endl;
}
