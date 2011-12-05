#include<iostream>
#include<string>
#define ratedoctor 200//定义了每个博士生的补助
#define ratestudent 100//定义了每个研究生的补助
#define rateclass 50  //定义了每节课的费用
#define rateyear 500//定义了工龄的补助
using namespace std;
class CStaff
{
protected:
	char No[10],Name[10],Sex[10];
	int serviceYear,baseMoney;
public:
	CStaff(char No[]="0",char Name[]="0",char Sex[]="man",int year=0,int money=0);
	~CStaff();
	void SetNo(char *no);
	char* GetNo();
	void SetName(char *name);
	char* GetName();
	void SetSex(char *sex);
	char* GetSex();
	void SetServiceYear(int year);
	int GetServiceYear();
	void SetBaseMoney(int money);
	int GetBaseMoney();
	virtual int GetSalary();
};
CStaff::CStaff(char* no,char* name,char* sex,int year,int money)
	   {
	     strcpy(No,no);
		 strcpy(Name,name);
		 strcpy(Sex,sex);
		 serviceYear=year;
		 baseMoney=money;
	   }
CStaff::~CStaff()
{}
void CStaff::SetNo(char* no)
{
  strcpy(No,no);
}
char* CStaff::GetNo()
{
  return No;
}
void CStaff::SetName(char* name)
{
	strcpy(Name,name);
}
char* CStaff::GetName()
{
  return Name;
}
void CStaff::SetServiceYear(int year)
{
  serviceYear=year;
}
int CStaff::GetServiceYear()
{
 return serviceYear;
}
void CStaff::SetSex(char* sex)
{
  strcpy(Sex,sex);
}
char* CStaff::GetSex()
{
  return Sex;
}
void CStaff::SetBaseMoney(int money)
{
  baseMoney=money;
}
int CStaff::GetBaseMoney()
{
  return baseMoney;
}
int CStaff::GetSalary()
{
  return baseMoney+GetServiceYear()*rateyear;
}
//以上是CStaff类的定义


class CAdminstrator:public CStaff
{
private:
	int dutyMoney;
public:
	void SetdutyMoney(int money=0)
	{
	  dutyMoney=money;
	}
	int GetdutyMoney()
	{
	 return dutyMoney;
	}
	int GetSalary()
	{
	  return  baseMoney+serviceYear*rateyear+GetdutyMoney();
	}
};
//上面定义的是Cadminstrator类


class CTempStaff:public CStaff
{
private:
	int static_money;
public:
	CTempStaff(){
	   static_money = 1000;
	}
	void SetStatic_money(int money)
	{
	  static_money=money;
	}
	int GetStatic_money()
	{
	  return static_money;
	}
	int GetSalary()
	{
	 return GetStatic_money();
	}
};

//以上定义的是CtempStaff类

class CTeacher:public CStaff
{
private:
	int Class,countNumber,NumberStudent,NumberDoctor;
public:
	void SetNumber(int n=0)
	{
	 countNumber=n;
	}
	int GetNumber()
	{
	return countNumber;
	}
	void SetClass(int c=1)
	{
	  Class=c;
	}
	int GetClass()
	{
	  return Class;
	}
	void SetNumberStudent(int NumberStudent=0)
	{
	  NumberStudent=NumberStudent;
	}
	int GetNumberStudent()
	{
	 return NumberStudent;
	}
	void SetNumberDoctor(int NumberDoctor=0)
	{
	 NumberDoctor=NumberDoctor;
	}
	int GetNumberDoctor()
	{
	 return NumberDoctor;
	}
	int GetSalary()
	{
	   switch(GetClass())
	   {
	   case 1:
		   {
             return baseMoney+serviceYear* rateyear+GetNumber()*rateclass;
		   }
	   case 2:
		   {
		    return baseMoney+serviceYear*rateyear+GetNumber()*rateclass+ratestudent*GetNumberStudent();
		   }
	   case 3:
		   {
		     return (baseMoney+serviceYear*rateyear+GetNumber()*rateclass+GetNumberStudent()*ratestudent+GetNumberDoctor()*ratedoctor);
		   }
	   default:
		   {
		     cout<<"input is error!\n";
		   }
	   }
	}
};

ostream& operator<<(ostream& m, CStaff ct)
{
	m<<"名字是："<<ct.GetName()<<'\n'<<"编号是："<<ct.GetNo()<<'\n'<<"性别是："<<ct.GetSex()<<'\n'<<"获得的工资是"<<ct.GetSalary();
	return m;
}

int main()
{
	int ii;
	cout<<"输入你想调用的类：1表示CStaff，2表示行政人员，3是临时工，4是\n";
	cin>>ii;
	switch(ii)
	{
	case 1:
	{
	int basemoney=0,year=0;
	char name[10],ID[10],sex[10];
	cout<<"这是建立一个CStaff类默认的参数分别是“0”，“0”，“man”,0,0\n";
    CStaff ct("201006002","ren","man",1,2);
	cout<<"输入你的名字是：";
    cin>>name;
	ct.SetName(name);
	cout<<"输入你的工号：";
	cin>>ID;
	ct.SetNo(ID);
	cout<<"输入你的性别：";
	cin>>sex;
	ct.SetSex(sex);
	cout<<"输入基本工资是：";
	cin>>basemoney;
	ct.SetBaseMoney(basemoney);
	cout<<"输入你的工年：";
	cin>>year;
	ct.SetServiceYear(year);
	cout<<ct;
	break;
	}
   //测试CAdminstrator类
	case 2:
	{
	CAdminstrator ca;
	cout<<"现在测试CAdminstrator类\n";
	int basemoney=0,year=0,dutymoney=0;
	char name[10],ID[10],sex[10];
	cout<<"这是建立一个CAdminstrator类默认的参数分别是“0”，“0”，“man”,0,0\n";
	cout<<"输入你的名字是：";
    cin>>name;
	ca.SetName(name);
	cout<<"输入你的工号：";
	cin>>ID;
	ca.SetNo(ID);
	cout<<"输入你的性别：";
	cin>>sex;
	ca.SetSex(sex);
	cout<<"输入基本工资是：";
	cin>>basemoney;
	ca.SetBaseMoney(basemoney);
	cout<<"输入你的工年：";
	cin>>year;
	ca.SetServiceYear(year);
	cout<<"输入职务工资，没有为0\n";
	cin>>dutymoney;
	ca.SetdutyMoney(dutymoney);
	cout<<ca;
	break;
	}
	//测试CTempStaff类
	case 3:	
	{
	CTempStaff ct;
	int basemoney=19,year=0;
	char name[10],ID[10],sex[10];
	cout<<"这是建立一个CTempStaff类默认的参数分别是“0”，“0”，“man”,0,0\n";
	cout<<"输入你的名字是：";
    cin>>name;
	ct.SetName(name);
	cout<<"输入你的工号：";
	cin>>ID;
	ct.SetNo(ID);
	cout<<"输入你的性别：";
	cin>>sex;
	ct.SetSex(sex);
	cout<<"输入固定工资是：";
	cin>>basemoney;
	cout<<basemoney;
	ct.SetStatic_money(basemoney);
	cout<<ct;
	cout<<ct.GetStatic_money();
	break;
	}
	case 4:
		{
		  int basemoney=0,year=0;
	char name[10],ID[10],sex[10];
	cout<<"这是建立一个CStaff类默认的参数分别是“0”，“0”，“man”,0,0\n";
    CTeacher ct;
	cout<<"输入你的名字是：";
    cin>>name;
	ct.SetName(name);
	cout<<"输入你的工号：";
	cin>>ID;
	ct.SetNo(ID);
	cout<<"输入你的性别：";
	cin>>sex;
	ct.SetSex(sex);
	cout<<"输入基本工资是：";
	cin>>basemoney;
	ct.SetBaseMoney(basemoney);
	cout<<"输入你的工年：";
	cin>>year;
	ct.SetServiceYear(year);
	cout<<ct;
		  break;
		}
	default:
		{
		cout<<"对不起，没有发现你要的，我们会尽快给你实现\n";
		}
	}
	system("pause");
	return 0;
}