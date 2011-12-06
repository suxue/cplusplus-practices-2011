#include<iostream>
#include<cmath>
using namespace std;
class Ctriangle
{
public:
      Ctriangle(double x,double y,double z)
      {
      	a=x;
      	b=y;
      	c=z;
      }
   double Getperimeter()
   {
   	return a+b+c;
   }   
   double GetArea()
   {
   	double p=Getperimeter()/2;
   	return sqrt(p*(p-a)*(p-b)*(p-c));
   }
   void display()
   {
   	cout<<"Ctriangle:"<<"a="<<a<<""<<"b="<<b<<""<<"c="<<c<<endl;
   	cout<<"Perimeter:"<<Getperimeter()<<endl;
   	cout<<"Area:"<<GetArea()<<endl;
   }
   private:
     double a;
     double b;
     double c;
};
int main()
{
	
	Ctriangle T(3,4,5);
	T.display();
	
}
