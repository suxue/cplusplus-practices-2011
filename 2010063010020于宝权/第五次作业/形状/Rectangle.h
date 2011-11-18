#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include"Point.h"
class Rectangle :public Point{
    private:
    double length,width;
    public :
    double area(double length,double width);
};


#endif // RECTANGLE_H_INCLUDED
