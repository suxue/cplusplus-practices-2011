/*
 * h_work.h
 *
 *  Created on: 2011-11-8
 *      Author: wepe
 */

#ifndef H_WORK_H_
#define H_WORK_H_

class Point{
public:
	Point(double x,double y);
	~Point();
	void locate();
private:
	double x,y;
};
class Circle:public Point{
public:
	Circle(double x,double y,double r);
	~Circle();
	double area();
private:
	double r;
	double PI;
};

class Rectangle:Point{
public:
	Rectangle(double x, double y, double x1, double y1, double x2, double y2, double x3, double y3);
	~Rectangle();
	double area();
	void locat();

private:
 double xy[8];
 bool bl;
 bool isRectangle();
};




#endif /* H_WORK_H_ */
