#include<iostream>
using namespace std; 
class Point{
private:
       float w,d; 
public:
       Point(float w,float d){
	   	  this->w=w;
	   	  this->d=d;
                }
	   
	   virtual ~Point(){
	   			}
	   void set(float w,float d){
	   		this->w=w;
	   		this->d=d;
	   			}
	   float getW(){
   		   return w;
   	   			}
   	   float getD(){
   	   	  return d;
   	   			}
	   virtual float Area()=0;
};
class Rectangle:public Point{
public:
      Rectangle(float w,float d):Point(w,d){
	  	  ;}
      float Area(){
      	  return getW()*getD();
      }
};
class Circle{
private:
       float r; 
public:
      Circle(float r=0.0){
      	this->r=r;
      		}
      float Area(){
      	  return 3.14*r*r;
      }
};
int main(){
	Rectangle r(5.0,8.0);
	cout<<"���εĳ�Ϊ8.0,��Ϊ5.0"<<endl;
	cout<<"�������Ϊ:"<<r.Area()<<endl;
	
	Circle c(18.0);
	cout<<"Բ�İ뾶��18.0"<<endl; 
	cout<<"Բ�����Ϊ:"<<c.Area()<<endl;
	return 0; 
}
