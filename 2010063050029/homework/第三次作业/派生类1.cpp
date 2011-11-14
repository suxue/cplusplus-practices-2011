#include <iostream>
using namespace std;
const float PI = 3.14159;
class Point {
	private:
		float x, y;
	public:
	Point (float X, float Y)
	 {
		this->x=X,this->y=Y;
    }
		float getArea()
		{
		return 0;
		}
};
class Circle : public Point {

		private :

		float radius;

	public :

		Circle(float x, float y, float radius):Point (x, y){
			this->radius = radius;
		}

		float getArea (){
			return radius* radius* PI;
		}
};
class Rectangle : public Point  {
    private:
		float length, wide;

	public :

		Rectangle (float X,float Y, float len, float wid) : Point (X,Y) {
			length  =  len;
			wide= wid;
		}

		float getArea(){
			return length* wide;
		}

};
int main()
{
	Point point(0, 1);
	Rectangle  rectangle(0,0,5, 4);
	Circle circle (0, 0, 3);
	cout<<point.getArea()<<endl<< rectangle .getArea()<<endl<<circle.getArea()<<endl;
}
