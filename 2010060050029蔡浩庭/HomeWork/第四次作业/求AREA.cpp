#include<iostream>
#include<cmath>
using namespace std;
class Point{
	public:float x,y;
		Point(float x1,float y1){
			x=x1;
			y=y1;
	}
};
class Rectangle:public Point{
	public:
	Point p1,p2,p3;
	float length,width;
	Rectangle(float x1,float y1,float x2,float y2,float x3,float y3){
    p1(x1,y1);
    p2(x2,y2);
    p3(x3,y3);
	}
	float Area(){
		float A;
        length=sqrt((p1.x-p2.x)^2+(p1.y-p2.y)^2);
		width=sqrt((p1.x-p3.x)^2+(p1.y-p3.y)^2);
		A=length*width;
		return A;
	}
};
class circle:public Point{
	public:
	Point p0,p1;
	float A,r;
	circle(float x1,float y1,float x2,float y2){
    p0(x1,y1);
    p1(x2,y2);
	}
	float Area(){
        r=sqrt((p1.x-p0.x)^2+(p1.y-p0.y)y^2);
        A=r*r*3.1415926;
		return A;
	}
};
	int main(){
	circle c(1,2,3,4);
	Rectangle r(1,2,3,4,5,6);
	cout<<"圆的面积："<<c.A<<endl;
	cout<<"平行四边形的面积："<<r.A<<endl;
	return 0;
}