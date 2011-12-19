#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

class Point
{
	public:
		double m,n;
		Point(double m,double n)
		{
			this->m=m;
			this->n=n;
			cout<<"������ɹ���"<<endl;
		}
};

class Rectangle:public Point
{
	public:
		double m1,n1,m2,n2;
		bool isRectangle(double m,double n,double m1,double n1,double m2,double n2)
		{
			double a=sqrt(pow(this->m-this->m1,2)+pow(this->n-this->n1,2));
			double b=sqrt(pow(this->m-this->m2,2)+pow(this->n-this->n2,2));
			double c=sqrt(pow(this->m1-this->m2,2)+pow(this->n1-this->n2,2));
			if((a+b<c)&(a+c<b)&(b+c<a)) 
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		Rectangle(double m,double n,double m1,double n1,double m2,double n2):Point(m,n) 
		{
			this->m1=m1;
			this->n1=n1;
			this->m2=m2;
			this->n2=n2;
			
			if(isRectangle(m,n,m1,n1,m2,n2))
			{
				cout<<"�����δ����ɹ���"<<endl;
			}
			else
			{
				cout<<"��Щ�㲻�ܹ���һ�������Ρ�"<<endl;
			}
		}
		
		double Area()
		{
			double a=sqrt(pow(this->m-this->m1,2)+pow(this->n-this->n1,2));
			double b=sqrt(pow(this->m-this->m2,2)+pow(this->n-this->n2,2));
			double c=sqrt(pow(this->m1-this->m2,2)+pow(this->n1-this->n2,2));
			double p=(a+b+c)/2;
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
};

class Circle:public Point
{	
	public:
		double r;
		double PI;
		Circle(double m,double n,double r):Point(m,n)
		{
			this->r=r;
			this->PI=3.14;
			if(r>0)
			{
				cout<<"Բ�����ɹ���"<<endl;
			} 
			else
			{
				cout<<"���Բ�İ뾶���벻����"<<endl;
			}
		}
		
		double Area()
		{
			return this->PI*pow(this->r,2);
		}
};

int main()
{
	Point p(0,0);
	Rectangle r(0,0,1,1,0,2);
	Circle c(0,0,4);
	cout<<"�����ε�����ǣ�"<<r.Area()<<endl;
	cout<<"Բ������ǣ�"<<c.Area()<<endl;
	return 0; 
}
