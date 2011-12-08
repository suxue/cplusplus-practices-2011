#include <iostream>

using namespace std;
class Point
{
    private:
    float x,y;
    public:
    Point(float a,float b);   //���캯�������������ͬ
};//������һ����󣬱����˼ӷֺ�
Point::Point(float a,float b)
{
    x=a;
    y=b;
}
class Rectangle:public Point
{
    private:
    int width;
    int high;
    public:
    Rectangle(float a,float b,float w,float h);//ֻ�����˸��������ڣã����з�������������ʵ��
    float Area()
    {
        return width*high;
    }

};
Rectangle::Rectangle(float a,float b,float w,float h):Point(a,b)
{
    width=w;
    high=h;
}
class Circle:public Point
{
    private:
    float radius;
    public:
    Circle(float a,float b,float r);
    float Area()     //�����з�������
    {
        return 3.14*radius*radius;
    }
};
Circle::Circle(float a,float b,float r):Point(a,b)
{
    radius=r;
}
int main()
{
    Rectangle R(2,2,2,2);
    cout<<"R.Area()="<<R.Area()<<endl;
    Circle C(2,2,2);
    cout<<"Circle.Area()="<<C.Area()<<endl;
}
