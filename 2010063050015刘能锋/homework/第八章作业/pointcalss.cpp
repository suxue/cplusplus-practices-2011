/*��7�⣬(1) 
*/
#include<iostream>
using namespace std;
class Point{
	private:
	int x,y;
	public:
	Point(int x=0,int y=0){
		this->x=x;this->y=y;
	}
    void ShowXY(){
    	cout<<"("<<x<<","<<y<<")"<<endl;
    }	
};
class Circle:public Point{
	private:
	double radius;
	public:
	Circle(double R=0.0,int x=3,int y=3):Point(x,y){
		radius=R;
	}
	double Area(){
		return 3.14159*radius*radius;
	}
	void Showcircle(){
		cout<<"Բ��Բ��Ϊ��";
		ShowXY();
		cout<<"�뾶Ϊ��"<<radius<<endl;
		cout<<"԰�����Ϊ��"<<Area()<<endl; 
	}
};
class Rectangle:public Point{
	private:
	int a,b;
	public:
	Rectangle(int a=0,int b=0):Point(a,b){
		this->a=a;this->b=b;
	}
	int Area(){
		return a*b;
	}
	void Showrectangle(){
		cout<<"���εı߳��ֱ�Ϊ��";
		cout<<a<<"\t"<<b<<endl; 
		cout<<"���ε����Ϊ��";
		cout<<Area()<<endl;
	}
};
int main()
{  Circle yuan1(10.0,1,1);
   yuan1.Showcircle();
   Rectangle juxing1(2,4);
   juxing1.Showrectangle();
   system("pause");
}
