#include<iostream.h>
#include<math.h>
using namespace std;
class Point
{
	private:
	float x;
	float y;
	public:
	void Setmsg(float a,float b)
	{
		x=a;
		y=b;
	}
	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
	}
	Point()
	{
		x=0.0;y=0.0;
	}
};
class Rectangle:public Point
{
	private:
	Point A,B,C;
	public:
	Rectangle(float a,float b,float c,float d,float e,float f)
	{
		A.Setmsg(a,b);B.Setmsg(c,d);C.Setmsg(e,f);
	}
	float area()
	{
		float ab=sqrt((A.getX()-B.getX())*(A.getX()-B.getX())+(A.getY()-B.getY())*(A.getY()-B.getY()));
		float bc=sqrt((B.getX()-C.getX())*(B.getX()-C.getX())+(C.getY()-B.getY())*(C.getY()-B.getY()));
		float ac=sqrt((A.getX()-C.getX())*(A.getX()-C.getX())+(A.getY()-C.getY())*(A.getY()-C.getY()));
		float p=(ab+bc+ac)/2.0;
		float s=sqrt(p*(p-ab)*(p-ac)*(p-bc));
		return s;
	}
};
class Circle:public Point
{
	private:
	Point O;
	float r;
	public:
	Circle(float a,float b,float l)
	{
		O.Setmsg(a,b);
		r=l;
	}
	float area()
	{
		float s=r*r*3.1416;
		return s;
	}
};
int main()
{
	Circle m(1.0,1.0,1.0);
	Rectangle n(0.0,0.0,1.0,0.0,0.0,1.0);
	float s1=0,s2=0;
	s1=m.area();
	s2=n.area();
	cout<<"圆的面积是"<<s1<<endl<<"三角形的面积是"<<s2<<endl;
	return 0;
}