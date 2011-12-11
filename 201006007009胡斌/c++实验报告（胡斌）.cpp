// c++ʵ�鱨�棨����.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include"iostream"
#include "iomanip"
using namespace std;
enum position{ordinary,section1,section2};
enum classification{AssistProf,Prof,tutor_PhD};
class CStaff{
private:
	int No,ServiceYears,Salary;//���š��������Ա𡢹��䡢�¹���
	char* Name;
	char* Sex;
public:
	   void SetNo(int no=0){No=no;}
	   void SetName(char* name=" "){Name=name;}
	   void SetSex(char* sex=" "){Sex=sex;}
	   void SetServiceYears(int serviceyears=0){ServiceYears=serviceyears;}
	   void setSalary(int salary=0) {Salary=salary; }
	   int GetNo(){return No;}
	   char* GetName(){return Name;}
	   char* GetSex(){return Sex;}
	   int GetServiceYears(){return ServiceYears;}
	   int GetSalary(){return Salary;}
	   virtual void show()=0;
};
class CTempStaff:public CStaff{
public:
	CTempStaff(long no,char* name,char* sex,int serviceyears){
		SetNo(no);
		SetName(name);
        SetSex(sex);
		SetServiceYears(serviceyears); }
	//void setSalary(int salary=2000) {CStaff::Salary=salary; }
	int GetSalary(){return 2000;}// CTempStaff�Ļ�������2000.
	void show(){
		cout<<"No:"<<GetNo()<<endl;
		cout<<"Name:"<<GetName()<<endl;
		cout<<"Sex:"<<GetSex()<<endl;
		cout<<"ServiceYears:"<<GetServiceYears()<<endl;
		cout<<"Salary:"<<GetSalary();
	}
	friend inline ostream &operator << (ostream &os,CAdministrator t){                              	             
	            cout<<"Ա����Ϣ:"<<endl<<setw(8)<<"����"<<setw(13)<<"ְ����"<<setw(10)<<"�Ա�"<<setw(10)<<"����"<<endl; 
                cout<<setw(8)<<t.Name<<setw(10)<<t.CardNu<<setw(10)<<t.Sex<<setw(14)<<t.GetSalary()<<endl;
              return os;
    }

};
class CAdministrator:public CStaff{
private:
	char* Position;
public:
	CAdministrator(int no,char* name,char* sex,int serviceyears,char* position){
		SetNo(no);
		SetName(name);
        SetSex(sex);
		SetServiceYears(serviceyears);
		Position=position;
	}
	int GetSalary(){
		if(*Position==(position)1) return 2000+GetServiceYears()*100;//һ����Ա������=��������+���乤��.
		if(*Position==(position)2) return 2000+GetServiceYears()*100+1000;//����=��������+���乤��+ְ����1.
		if(*Position==(position)3) return 2000+GetServiceYears()*100+2000;//����=��������+���乤��+ְ����2.
	}
		void show(){
		cout<<"No:"<<GetNo()<<endl;
		cout<<"Name:"<<GetName()<<endl;
		cout<<"Sex:"<<GetSex()<<endl;
		cout<<"ServiceYears:"<<GetServiceYears()<<endl;
		cout<<"Salary:"<<CAdministrator::GetSalary();
	}
	friend inline ostream &operator << (ostream &os,CAdministrator t){                              	             
	            cout<<"Ա����Ϣ:"<<endl<<setw(8)<<"����"<<setw(13)<<"ְ����"<<setw(10)<<"�Ա�"<<setw(10)<<"����"<<endl; 
                cout<<setw(8)<<t.Name<<setw(10)<<t.CardNu<<setw(10)<<t.Sex<<setw(14)<<t.GetSalary()<<endl;
              return os;
    }

};
class CTeacher:public CStaff{
	int hours,msNo,dsNo,Salary;//ѧʱ����˶ʿ������ʿ��.
	char* sort;//���.
public:
	CTeacher(int no,char* name,char* sex,int serviceyears,int hours,int msNo,int dsNo,char* sort){
		SetNo(no);
		SetName(name);
        SetSex(sex);
		SetServiceYears(serviceyears);
		hours=hours;
		msNo=msNo;
		dsNo=dsNo;
		sort=sort;
	}
	int GetSalary(){
		if(*sort==(classification)1) return 2000+GetServiceYears()*100+hours*100;//����=��������+���乤��+��ʱ��.
		if(*sort==(classification)2) return 2000+GetServiceYears()*100+hours*100+msNo*100;//����=��������+���乤��+��ʱ��+˶ʿ������.
		if(*sort==(classification)3) return 2000+GetServiceYears()*100+hours*100+dsNo*200;//����=��������+���乤��+��ʱ��+��ʿ������.
	}
	void show(){
		cout<<"No:"<<GetNo()<<endl;
		cout<<"Name:"<<GetName()<<endl;
		cout<<"Sex:"<<GetSex()<<endl;
		cout<<"ServiceYears:"<<GetServiceYears()<<endl;
		cout<<"Salary:"<<CTeacher::GetSalary();
	}
	friend inline ostream &operator << (ostream &os,CAdministrator t){                              	             
	            cout<<"Ա����Ϣ:"<<endl<<setw(8)<<"����"<<setw(13)<<"ְ����"<<setw(10)<<"�Ա�"<<setw(10)<<"����"<<endl; 
                cout<<setw(8)<<t.Name<<setw(10)<<t.CardNu<<setw(10)<<t.Sex<<setw(14)<<t.GetSalary()<<endl;
              return os;
    }

};
int main(){
	int a,no,serviceyears;
	char* name;
	char* sex;
	char* position;
	cout<<"   �밴Ҫ�����������ѯ����Ϣ��"<<endl;
	cout<<"��Ҫ��ѯ���ǣ�1����ʱ������2��������Ա����3����ʦ��"<<endl;
	cin>>a;
	cout<<"ְ���ţ�";cin>>no;cout<<endl;
	cout<<"������";cin>>name;cout<<endl;
	cout<<"�Ա�";cin>>sex;cout<<endl;
	cout<<"�������䣺";cin>>serviceyears;cout<<endl;
	CStaff *p;
	if(1==a){
		CTempStaff A(no,name,sex,serviceyears);
		p=&A;
		p->show();}
	if(2==a){
		cout<<"����ordinary,section1,section2:";
		cin>>position;cout<<endl;
		CAdministrator B(no,name,sex,serviceyears,position); 
	     p=&B;
		 p->show();
	}
	 if(3==a)
   {  int x,y,z;
   	cout<<"ְ�ƣ�(AssistProf,Prof,tutor_PhD:)"<<endl; cin>>position;
    cout<<"ѧʱ����"<<endl;                   cin>>x;
    cout<<"˶ʿ������"<<endl;           cin>>y;
    cout<<"��ʿ������"<<endl;           cin>>z;
    CTeacher C(no,name,sex,serviceyears,x,y,z,position);
    p=&C;
    p->show(); 
   }
}

