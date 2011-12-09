#include <iostream>

#define PI (3.1415)
using namespace std;

class Point{
private:
	double X,Y;
public:
	Point(double X=0,double Y=0){
		this->X=X;
		this->Y=Y;
	}
	virtual double Area(){
		cout<<"Area is: "<<0<<endl;
		return 0;
	}
};

class Rectangle:public Point{
private:
	double L,W;
public:
	Rectangle(double L,double W){
		this->L=L;
		this->W=W;
		cout<<"Rectangle  constructing..."<<endl;
	}
	double Area(){
		cout<<"Area is: "<<(this->L)*(this->W)<<endl;
		return (this->L)*(this->W);
	}
};

class Circle:public Point{
private:
	double R;
public:
	Circle(double R,int X,int Y):Point(X,Y){
		this->R=R;
		cout<<"Circle  constructing..."<<endl;
	}
	double Area(){
		cout<<"Area is: "<<PI*(this->R)*(this->R)<<endl;
		return PI*(this->R)*(this->R);
	}
};

int main(){
	cout<<"创建点坐标（9,8）"<<endl;
	Point a(9,8);
	cout<<"point constructing..."<<endl;
	cout<<"创建长度为8，宽度为9的矩形"<<endl;
	Rectangle b(8,9);
	b.Area();
	cout<<"创建半径为7，圆心坐标为（7,6）的圆"<<endl;
	Circle c(7,7,6);
	c.Area();
	int m;
	cin>>m;
	return 0;
}