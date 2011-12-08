#include<iostream>
using namespace std;
class point{
	private:
	double x,y;
	public:
	point(double xx,double yy){
		x=xx;
		y=yy;
	}
};
	class Rectangle:public point{
	private:
	double w,h;
	public:
	Rectangle(double m,double n,double x,double y):point(x,y){
		w=m;h=n;
	};
	double Area(){
		return (w*h)/2;
	}};

	class Circle:public point{
	private:
	double r;
	public:
	Circle(double ra,double x,double y):point(x,y){
		r=ra;
	};
	double Area(){
		return 3.14*r*r;
	}};
int main(){
	Circle ci(4,5,6);
	cout<<ci.Area()<<endl;
	Rectangle re(1,2,3,4);
	cout<<re.Area()<<endl;
	return 0;
}