/*
	rectangle circle 类对Pofloat 类的继承
*/
#include <iostream>
const float PI = 3.14159;
using namespace std;

class Pofloat {

	public:
		Pofloat (float x1, float y1) {
			x = x1;
			y = y1;
		}
		
		float getArea() {
			return 0.0;
		}
	~Pofloat(){}

	private:
		float x, y;
};

class Rectangle : public Pofloat {

	public :

		Rectangle (float x1, float y1, float len1, float wid1) : Pofloat(x1,y1) {
			len =  len1;
			wid = wid1;			
		}		
		
		float getArea(){
			return len * wid;
		}

		~Rectangle(){}

	private:
		float len, wid;
};

class Circle : public Pofloat {
	
	public :
		
		Circle(float x, float y, float rid):Pofloat(x, y){
			this->rid = rid;
		}
		
		float getArea (){
			return rid * rid * PI;
		}
		
		~Circle () {}

		private :
		
		float rid;
};

int main()
{
	Pofloat a(0, 1);
	Rectangle b(0, 0, 1, 1);
	Circle c(0, 0, 1);
	cout<<a.getArea()<<endl<< b.getArea()<<endl<<c.getArea()<<endl;
}

