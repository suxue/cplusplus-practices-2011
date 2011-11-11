#include <iostream>
using namespace std;
const double pi=3.14159;
class point{
    private:
          int x,y;
    public:
    point(int x=0,int y=0){
        this->x=x,this->y=y;  }
    void showXY(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
  };
class circle:public point{
private:
     double radius;
public:
      circle(double r,int x,int y):point(x,y)    {
          radius=r;}
double area(){
    return pi*radius*radius;}
void showCircle(){
cout<<"the center is:";
showXY();
cout<<"radius"<<radius<<endl;}
};
class Rectangle:public point{
private:
         double wide,large;
public:
        Rectangle(double a,double b,int x,int y):point(x,y){
            wide=a,large=b;  }
        double area(){
        return wide*large;}
        void showRectangle(){
        cout<<"the headcenter is:";
        showXY();
        cout<<"wide"<<wide<<endl;
        cout<<"large"<<large<<endl;
        }
};
int main(){
    circle cir1(10,100,100);
    cir1.showCircle();
    cout<<"the area is"<<cir1.area()<<endl;
    Rectangle Rect1(10,20,30,40);
    Rect1.showRectangle();
    cout<<"the area is"<<Rect1.area()<<endl;
return 0;
}
