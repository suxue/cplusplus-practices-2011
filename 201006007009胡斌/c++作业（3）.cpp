// c++��ҵ��3��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class point{
private:
	int x,y;
public:
	point(int x,int y){
		this->x=x,this->y=y;}
	void show(){
		cout<<"x="<<x<<","<<"y="<<y<<endl;}
};
const double pi=3.14;
class circle:public point{
private :
	double r;
public:
	circle(int x,int y,double r):point(x,y){
		this->r=r;}
	void show(){
		cout<<"r="<<r<<endl;}
	void area(){
		cout<<"Բ������ǣ�"<<pi*r*r;}
};
class rectangle:public point{
private:
	double length,width;
public:
	rectangle(int x,int y,double length,double width):point(x,y){
		this->length=length,this->width=width;}
	void area(){
		cout<<"��������ǣ�"<<length*width;}
};
void main(){
	point p(1,2);
	p.show();
	circle c(1,2,4);
	c.show();
	c.point::show();
	c.area();
	rectangle r(1,2,2,3);
	r.area();

}

