#include<iostream>
#include<string>
#define ratedoctor 200//������ÿ����ʿ���Ĳ���
#define ratestudent 100//������ÿ���о����Ĳ���
#define rateclass 50  //������ÿ�ڿεķ���
#define rateyear 500//�����˹���Ĳ���
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
//������CStaff��Ķ���


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
//���涨�����Cadminstrator��


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

//���϶������CtempStaff��

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
	m<<"�����ǣ�"<<ct.GetName()<<'\n'<<"����ǣ�"<<ct.GetNo()<<'\n'<<"�Ա��ǣ�"<<ct.GetSex()<<'\n'<<"��õĹ�����"<<ct.GetSalary();
	return m;
}

int main()
{
	int ii;
	cout<<"����������õ��ࣺ1��ʾCStaff��2��ʾ������Ա��3����ʱ����4��\n";
	cin>>ii;
	switch(ii)
	{
	case 1:
	{
	int basemoney=0,year=0;
	char name[10],ID[10],sex[10];
	cout<<"���ǽ���һ��CStaff��Ĭ�ϵĲ����ֱ��ǡ�0������0������man��,0,0\n";
    CStaff ct("201006002","ren","man",1,2);
	cout<<"������������ǣ�";
    cin>>name;
	ct.SetName(name);
	cout<<"������Ĺ��ţ�";
	cin>>ID;
	ct.SetNo(ID);
	cout<<"��������Ա�";
	cin>>sex;
	ct.SetSex(sex);
	cout<<"������������ǣ�";
	cin>>basemoney;
	ct.SetBaseMoney(basemoney);
	cout<<"������Ĺ��꣺";
	cin>>year;
	ct.SetServiceYear(year);
	cout<<ct;
	break;
	}
   //����CAdminstrator��
	case 2:
	{
	CAdminstrator ca;
	cout<<"���ڲ���CAdminstrator��\n";
	int basemoney=0,year=0,dutymoney=0;
	char name[10],ID[10],sex[10];
	cout<<"���ǽ���һ��CAdminstrator��Ĭ�ϵĲ����ֱ��ǡ�0������0������man��,0,0\n";
	cout<<"������������ǣ�";
    cin>>name;
	ca.SetName(name);
	cout<<"������Ĺ��ţ�";
	cin>>ID;
	ca.SetNo(ID);
	cout<<"��������Ա�";
	cin>>sex;
	ca.SetSex(sex);
	cout<<"������������ǣ�";
	cin>>basemoney;
	ca.SetBaseMoney(basemoney);
	cout<<"������Ĺ��꣺";
	cin>>year;
	ca.SetServiceYear(year);
	cout<<"����ְ���ʣ�û��Ϊ0\n";
	cin>>dutymoney;
	ca.SetdutyMoney(dutymoney);
	cout<<ca;
	break;
	}
	//����CTempStaff��
	case 3:	
	{
	CTempStaff ct;
	int basemoney=19,year=0;
	char name[10],ID[10],sex[10];
	cout<<"���ǽ���һ��CTempStaff��Ĭ�ϵĲ����ֱ��ǡ�0������0������man��,0,0\n";
	cout<<"������������ǣ�";
    cin>>name;
	ct.SetName(name);
	cout<<"������Ĺ��ţ�";
	cin>>ID;
	ct.SetNo(ID);
	cout<<"��������Ա�";
	cin>>sex;
	ct.SetSex(sex);
	cout<<"����̶������ǣ�";
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
	cout<<"���ǽ���һ��CStaff��Ĭ�ϵĲ����ֱ��ǡ�0������0������man��,0,0\n";
    CTeacher ct;
	cout<<"������������ǣ�";
    cin>>name;
	ct.SetName(name);
	cout<<"������Ĺ��ţ�";
	cin>>ID;
	ct.SetNo(ID);
	cout<<"��������Ա�";
	cin>>sex;
	ct.SetSex(sex);
	cout<<"������������ǣ�";
	cin>>basemoney;
	ct.SetBaseMoney(basemoney);
	cout<<"������Ĺ��꣺";
	cin>>year;
	ct.SetServiceYear(year);
	cout<<ct;
		  break;
		}
	default:
		{
		cout<<"�Բ���û�з�����Ҫ�ģ����ǻᾡ�����ʵ��\n";
		}
	}
	system("pause");
	return 0;
}