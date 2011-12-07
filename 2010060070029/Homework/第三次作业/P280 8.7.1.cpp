#include<iostream>
#define PI 3.14
using namespace std;
class Point{
private:
	double X,Y;
public:
	Point(double X=0,double Y=0){
		this->X=X;
		this->Y=Y;
	}
};
	class Rectangle:public Point{
private:
	double wide,high;
public:
	Rectangle(double a,double b,double X,double Y):Point(X,Y){
		wide=a;high=b;
	};
	double Area(){
		return (wide*high)/2;
	}};

	class Circle:public Point{
private:
	double radius;
public:
	Circle(double radius,double X,double Y):Point(X,Y){
		this->radius=radius;
	};
	double Area(){
		return PI*radius*radius;
	}};
int main(){
	Circle cir(10,20,30);
	cout<<cir.Area()<<endl;
	Rectangle rec(1,2,3,4);
	cout<<rec.Area()<<endl;
	return 0;
}
