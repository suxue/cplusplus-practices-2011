// c++��ҵ��4��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class people{
private:
	int num;
	char* name;
public:
	people(int num,char* name){
		this->name=name;this->num=num;}
	void show(){
		cout<<"��ţ�"<<num<<","<<"������"<<name<<endl;}
};
class manager:public people{
public:
	manager(int num,char* name):people(num,name){}
	int money(){
		return 8000;}
	void show(){
		cout<<"manager: ����:"<<8000<<",";
	    people::show();}
};
class technician:public people{
private:
	int hour;
public:
	technician(int num,char* name,int hour):people(num,name){
		   this->hour=hour;}
	    int money(){
			return hour*100;}
		void show(){
			cout<<"technician: ���ʣ�"<<hour*100<<",";
			people::show();}
};
class salesman:public people{
private:
	double  salesmoney;
public:
	salesman(int num,char* name,double salesmoney):people(num,name){
		this->salesmoney=salesmoney;}
	double money(){
		return salesmoney*4/100;}
	void show(){
		cout<<"salesman:���ʣ�"<<salesmoney*4/100<<",";
	    people::show();}
};
class salesmanager:public people{
private:
	double salesmoney;
public:
	salesmanager(int num,char* name,double salesmoney):people(num,name){
		this->salesmoney=salesmoney;}
	double money(){
		return 5000+salesmoney*(0.5/100);}
	void show(){
		cout<<"salesmanager:���ʣ�"<<5000+salesmoney*(0.5/100)<<",";
	    people::show();}
};
int main(){
	 people p(9,"Bingogo");
	p.show();
	 manager m(9,"Bingogo");
	m.show();
	 technician t(9,"Bingogo",100);
	t.show();
	 salesmanager smg(9,"Bingogo",10000);
	smg.show();
	salesman sm(9,"Bingogo",100000);
	sm.show();
}

		