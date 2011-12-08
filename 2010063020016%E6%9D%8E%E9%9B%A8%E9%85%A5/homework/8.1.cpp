#include <iostream>
using namespace std;

const double pi = 3.14;
//Point类，派生出Rectangle类和Circle类，计算各派生类对象的面积Area（）。
template <class T>
class Point
{
public:
Point(){}
Point(const T x, const T y);
Point& operator= (const Point<T>&p);

public:
T x;
T y;
};

template <class T>
Point<T>::Point(const T x, const T y)
{
this->x = x;
this->y = y;
}
template <class T>
Point<T>& Point<T>::operator= (const Point<T>&p)
{
this->x = p.x;
this->y = p.y;
return *this;
}

template <class T>
class Shape
{
public:
virtual double Area() = 0;
};
template <class T>
class Rectangle:public Shape<T>
{
public:
Rectangle(const Point<T>& p1, const Point<T>& p2);
double Area();
private:
Point<T> pLT;
Point<T> pRD;
};

template <class T>
Rectangle<T>::Rectangle(const Point<T>& p1, const Point<T>& p2)
{
pLT = p1;
pRD = p2;
}
template <class T>
double Rectangle<T>::Area()
{
T w = pLT.x - pRD.x;
T h = pLT.y - pRD.y;
if(w<0) w = -w;
if(h<0) h = -h;
return double(w * h);
}
//Circle
template <class T>
class Circle:public Shape<T>
{
public:
Circle(const Point<T>& p1, const T& r);
double Area();
private:
Point<T> origin;
T r;
};

template <class T>
Circle<T>::Circle(const Point<T>& p1, const T& r)
{
origin = p1;
this->r = r;
}
template <class T>
double Circle<T>::Area()
{
return pi * r * r;
}
int main()
{
Point<int> p1(9, 0);
Point<int> p2(1, 2);
Rectangle<int> R(p1, p2);
Circle<int>  C(p1, 10);
printf("Rectangle ' Area is %f\n", R.Area());
printf("Circle ' Area is %f\n", C.Area());
return 0;
} 
