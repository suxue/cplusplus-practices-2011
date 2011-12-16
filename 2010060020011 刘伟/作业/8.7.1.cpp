#include<iostream>
using namespace std;
class Point {
	public:
	  Point(int a,int b){
		x=a;
		y=b;
	}
	void showXY(){
		cout<<"x="<<x<<" y="<<y<<endl;
	}
	private:
	int x,y;
};
class Rectangle:public Point{
	public:
	Rectangle(int a,int b,int Wide,int High):Point(a,b){
		wide=Wide;
		high=High;
	}
	int Area(){
		return wide*high;
	}
	private:
	int wide,high;
};
class Circle:public Point{
	public:
	Circle(int a,int b,int r):Point(a,b){
		R=r;
	}
	double Area(){
		return 3.14*R*R;
	}
	private:
	int R;
};
int main(){
	int s1,s2;
	Rectangle Rec(0,0,1,2);
	Circle Cir(0,0,1);
	cout<<"矩形的面积："<<Rec.Area()<<endl;
	cout<<"圆的面积："<<Cir.Area()<<endl;
	return 0;
}
