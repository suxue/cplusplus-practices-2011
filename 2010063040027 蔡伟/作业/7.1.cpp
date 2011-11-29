#include<iostream>
using namespace std;
class Point{
       private:
           double x,y;
       public:
		   Point(double x,double y){
			   this->x=x;
			   this->y=y;
		   }
		   void Show(){
		   	cout<<"中心坐标是"<<"("<<x<<","<<y<<")"<<endl;
		   }
   		};
class Rectangle:public Point{
       private:
		   double a,b,s;
       public:
		   Rectangle(double a,double b,double x,double y):Point(x,y){
			   this->a=a;this->b=b;
		   }
		   void area(){
             s=a*b;
             Point::Show();
			 cout<<"s="<<s<<endl;
		   }
};
class Circle:public Point{
     private:
	   double r,s;
     public:
	   Circle(double r,double x,double y):Point(x,y){
   		this->r=r;
   	}                                                                                                                                                                                                                                                                                                                                                                                                                 
 	   void area(){
             s=3.14*r*r;
             Point::Show();
			 cout<<"s="<<s<<endl;}
};
int main(){
	Rectangle CFxing(2.0,3.0,0,0);
	CFxing.area();
	Circle Yuan(1.0,0,0);
	Yuan.area();
	return 0;
}