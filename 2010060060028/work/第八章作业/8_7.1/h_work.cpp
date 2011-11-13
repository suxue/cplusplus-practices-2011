#include<iostream>
#include"h_work.h"
#include"math.h"

using namespace std;
Point::Point(double x, double y) {

	this->x = x;
	this->y = y;
}
Point::~Point() {
	delete (&x);
	delete (&y);
}
void Point::locate() {
	cout << "( " << x << "," << y << " )";
}

Circle::Circle(double x, double y, double r) :
		Point(x, y) {
	this->r = r;
	PI = 3.14;
}
Circle::~Circle() {
	delete (&r);
	delete (&PI);

}
double Circle::area() {
	return PI * r * r;
}

Rectangle::Rectangle(double x, double y, double x1, double y1, double x2,
		double y2, double x3, double y3) :
		Point(x, y) {
	xy[0] = x1;
	xy[1] = x2;
	xy[2] = x3;
	xy[3] = y1;
	xy[4] = y2;
	xy[5] = y3;
	bl = this->isRectangle();
	if (bl) {
	} else {
		cout << "no retangle";
		xy[6] = 0;
	}
}
Rectangle::~Rectangle() {
	delete (xy);
}
bool Rectangle::isRectangle() {
	double xyy[9];
	for (int i = 0; i < 2; i++) {
		xyy[i] = xy[i] - xy[i + 1];
	}
	xyy[2] = xy[0] - xy[2];
	for (int i = 3; i < 5; i++) {
		xyy[i] = xy[i] - xy[i + 1];

	}
	xyy[5] = xy[3] - xy[5];
	for (int i = 0; i < 6; i++) {

     if(xyy[i]<0){
    	 xyy[i]=(-xyy[i]);
     }
	}
	for (int i = 0; i < 3; i++) {
		xyy[i + 6] = xyy[i] * xyy[i] + xyy[i + 3] * xyy[i + 3];
	}
	if (xyy[6] == xyy[7] + xyy[8] || xyy[7] == xyy[6] + xyy[8]
			|| xyy[8] == xyy[6] + xyy[7]) {
		double temp=0;
		int k=0;
		for (int i = 6; i < 9; i++) {
            if(xyy[i]>temp){
            	temp=xyy[i];
            	k=i;
            }

		}
      cout<<"#"<<k;

		switch (k){

		case 6:
			xy[6]=sqrt(xyy[7]*xyy[8]);
			break;
		case 7:
			xy[6]=sqrt(xyy[6]*xyy[8]);
			break;
		case 8:
			xy[6]=sqrt(xyy[6]*xyy[8]);
			break;
		}
		return true;

	} else {
		return false;
	}
}

double Rectangle::area() {
	return xy[6];
}
void Rectangle::locat() {
	this->locate();
	for (int i = 0; i < 3; i++) {
		cout << "(" << xy[i] << "," << xy[i + 3] << ")" << " ";
	}
}

