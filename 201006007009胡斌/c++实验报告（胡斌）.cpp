// c++实验报告（胡斌）.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include"iostream"
#include "iomanip"
using namespace std;
enum position{ordinary,section1,section2};
enum classification{AssistProf,Prof,tutor_PhD};
class CStaff{
private:
	int No,ServiceYears,Salary;//工号、姓名、性别、工龄、月工资
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
	int GetSalary(){return 2000;}// CTempStaff的基本工资2000.
	void show(){
		cout<<"No:"<<GetNo()<<endl;
		cout<<"Name:"<<GetName()<<endl;
		cout<<"Sex:"<<GetSex()<<endl;
		cout<<"ServiceYears:"<<GetServiceYears()<<endl;
		cout<<"Salary:"<<GetSalary();
	}
	friend inline ostream &operator << (ostream &os,CAdministrator t){                              	             
	            cout<<"员工信息:"<<endl<<setw(8)<<"姓名"<<setw(13)<<"职工号"<<setw(10)<<"性别"<<setw(10)<<"工资"<<endl; 
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
		if(*Position==(position)1) return 2000+GetServiceYears()*100;//一般人员：工资=基本工资+工龄工资.
		if(*Position==(position)2) return 2000+GetServiceYears()*100+1000;//工资=基本工资+工龄工资+职务工资1.
		if(*Position==(position)3) return 2000+GetServiceYears()*100+2000;//工资=基本工资+工龄工资+职务工资2.
	}
		void show(){
		cout<<"No:"<<GetNo()<<endl;
		cout<<"Name:"<<GetName()<<endl;
		cout<<"Sex:"<<GetSex()<<endl;
		cout<<"ServiceYears:"<<GetServiceYears()<<endl;
		cout<<"Salary:"<<CAdministrator::GetSalary();
	}
	friend inline ostream &operator << (ostream &os,CAdministrator t){                              	             
	            cout<<"员工信息:"<<endl<<setw(8)<<"姓名"<<setw(13)<<"职工号"<<setw(10)<<"性别"<<setw(10)<<"工资"<<endl; 
                cout<<setw(8)<<t.Name<<setw(10)<<t.CardNu<<setw(10)<<t.Sex<<setw(14)<<t.GetSalary()<<endl;
              return os;
    }

};
class CTeacher:public CStaff{
	int hours,msNo,dsNo,Salary;//学时数，硕士数，博士数.
	char* sort;//类别.
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
		if(*sort==(classification)1) return 2000+GetServiceYears()*100+hours*100;//工资=基本工资+工龄工资+课时费.
		if(*sort==(classification)2) return 2000+GetServiceYears()*100+hours*100+msNo*100;//工资=基本工资+工龄工资+课时费+硕士生补助.
		if(*sort==(classification)3) return 2000+GetServiceYears()*100+hours*100+dsNo*200;//工资=基本工资+工龄工资+课时费+博士生补助.
	}
	void show(){
		cout<<"No:"<<GetNo()<<endl;
		cout<<"Name:"<<GetName()<<endl;
		cout<<"Sex:"<<GetSex()<<endl;
		cout<<"ServiceYears:"<<GetServiceYears()<<endl;
		cout<<"Salary:"<<CTeacher::GetSalary();
	}
	friend inline ostream &operator << (ostream &os,CAdministrator t){                              	             
	            cout<<"员工信息:"<<endl<<setw(8)<<"姓名"<<setw(13)<<"职工号"<<setw(10)<<"性别"<<setw(10)<<"工资"<<endl; 
                cout<<setw(8)<<t.Name<<setw(10)<<t.CardNu<<setw(10)<<t.Sex<<setw(14)<<t.GetSalary()<<endl;
              return os;
    }

};
int main(){
	int a,no,serviceyears;
	char* name;
	char* sex;
	char* position;
	cout<<"   请按要求输入你想查询的信息！"<<endl;
	cout<<"你要查询的是：1（临时工），2（行政人员），3（教师）"<<endl;
	cin>>a;
	cout<<"职工号：";cin>>no;cout<<endl;
	cout<<"姓名：";cin>>name;cout<<endl;
	cout<<"性别：";cin>>sex;cout<<endl;
	cout<<"工作年龄：";cin>>serviceyears;cout<<endl;
	CStaff *p;
	if(1==a){
		CTempStaff A(no,name,sex,serviceyears);
		p=&A;
		p->show();}
	if(2==a){
		cout<<"级别：ordinary,section1,section2:";
		cin>>position;cout<<endl;
		CAdministrator B(no,name,sex,serviceyears,position); 
	     p=&B;
		 p->show();
	}
	 if(3==a)
   {  int x,y,z;
   	cout<<"职称：(AssistProf,Prof,tutor_PhD:)"<<endl; cin>>position;
    cout<<"学时数："<<endl;                   cin>>x;
    cout<<"硕士生数："<<endl;           cin>>y;
    cout<<"博士生数："<<endl;           cin>>z;
    CTeacher C(no,name,sex,serviceyears,x,y,z,position);
    p=&C;
    p->show(); 
   }
}

