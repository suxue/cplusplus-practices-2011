#include <iostream>
using namespace std;
class Point
{
    protected:
    int X,Y;
    public:
    Point(int X,int Y)
    {
        this->X=X,this->Y=Y;
    }
    double Area();
};
class Circle:public Point
{
    private:
    double r;
    public:
    Circle(double R,int X,int Y):Point(X,Y)
    {
        r=R;
    }
    double Area()
    {
        double PI=3.14;
        return PI*r*r;
    }
};
class Rectangle:public Point
{
    public:
    Rectangle(int X,int Y):Point(X,Y)
    {
    }
    double Area()
    {
        return X*Y;
    }

};
int main()
{
    Circle c1(1,1,1);
    Rectangle R1(1,1);
   c1.Area();
   R1.Area();
}











