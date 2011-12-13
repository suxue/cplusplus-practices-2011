#include<iostream>
using namespace std;

class point
{
 private:
 int x,y;
 public:
 point(int x=0,int y=0)
 {
 this->x=x;
 this->y=y;
 }
 void showxy()
 {
	cout<<"("<<x<<","<<y<<")"<<endl;
 }
};
//const double PI=3.1415;
class circle:public point
	{
	private:
	double radius;
	public:
	circle(int x,int y,double R):point(x,y)
	{
		radius=R;
	}
	double area()
	{
		return 3.14*radius*radius;
	}
	void showcircle()
		{
			cout<<"circle's centre:";
			showxy();
		    cout<<"radius:"<<radius<<endl;
		}                                 //????????????
	};

	class rectangle:protected point
	{
		protected:
		double width,length;
	public:
	rectangle(double w=0,double l=0,int x=0,int y=0):point(x,y)
	{
		width=w;
		length=l;
	}
	double area()
	{
		return width*length;
	}
	void showrectangle()
	{
		cout<<"rectangle's centre:";
		showxy();
		cout<<"rectangle:"<<length<<width<<endl;
	}
	};
 int main()
    {
  		rectangle rec(10,100,1,1);
		circle cir(10,0,0);
		rec.showrectangle();
		cir.showcircle();
		cout<<"area:"<<rec.area()<<cir.area()<<endl;
		return 0;
    }
	
	


	
	
