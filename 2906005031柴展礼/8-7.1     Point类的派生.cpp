#include<iostream>
using namespace std;
class Point
{
 	  public:
	  		 Point(float xx,float yy)
	  		 {
			  			 x=xx;
			  			 y=yy;
			 }
   	  private:
	  		  float x;
	  		  float y;
			  };
			  class Rectangle:public Point
			  {
			   		public:
						   Rectangle(float xx,float yy,float w,float h);
						   float Area()
						   {
						   		 return width*high;
									}
									private:
											int width;
											int high;
											};
											Rectangle::Rectangle(float xx,float yy,float w,float h):Point(xx,yy)
						   {
						      width=w;
							  high=h;
											  }
											  class Circle:public Point
											  {
											   		public:
														   Circle(float xx,float yy,float r);
														   float Area()
														   {
														   		 return 3.14*radius*radius;
																 }
																 private:
																 		 float radius;
																		 };
Circle::Circle(float xx,float yy,float r):Point(xx,yy){radius=r;}

int main(){
	Rectangle R(1,2,3,4);
	cout<<"R.Area()="<<R.Area()<<endl;
	Circle C(5,6,7);
	cout<<"C.Area()="<<C.Area()<<endl;
	system("pause");
}
