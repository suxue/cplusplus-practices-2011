#include<iostream>
#define PI 3.14
using namespace std;
class Point{
public:
	virtual  double area()=0;
};
class Rectangle:public Point{
private:
	double a,b,c;
public:
	Rectangle(double a,double b,double c){
		this->a=a;
		this->b=b;
		this->c=c;
		if((a+b>c&&a+c>b&&b+c>a)&&(a*a+b*b==c*c)){}
		else{cout<<"这个图形不是直角三角形"<<endl;}
		}
	double area(){
		return a*b*1/2;
	}
};
class Circle:public Point{
private:
	double R;
public:
	Circle(double R){
		this->R=R;
	}
	double area(){
		return R*R*PI;
	}
};
int main(){
	Rectangle A(3,4,5);
	Rectangle B(4,5,6);
	Circle C(2);
	cout<<"A.area="<<A.area()<<endl;
	cout<<"C.area="<<C.area()<<endl;
	return 0;
}



