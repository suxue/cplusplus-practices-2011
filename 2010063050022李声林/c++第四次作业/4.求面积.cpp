#include<iostream>
const float PI=3.1416;
using namespace std;

class Point{
   private:
		float x, y;
	public:
		Point(float x1,float y1){
			x = x1;
			y = y1;
		}

		float getArea(){
			return 0.0;
		}
	~Point(){}
};

class Rectangle:public Point{
    private:
		float length, width;
	public :
        Rectangle(float x1,float y1,float length1,float width1):Point(x1,y1){
			length=length1;
			width=width1;
		}

		float getArea(){
			return length*width;
		}
		~Rectangle(){}
};

class Circle:public Point{
	private:
		float ridius;
	public:
		Circle(float x,float y,float ridius1):Point(x, y){
			ridius=ridius1;
		}

		float getArea(){
			return PI*ridius*ridius;
		}
		~Circle(){}
   };

int main()
{
	Point p(0, 1);
	Rectangle r(0,0,1,2);
	Circle c(0,0,2);
	cout<<p.getArea()<<endl<< r.getArea()<<endl<<c.getArea()<<endl;
}

