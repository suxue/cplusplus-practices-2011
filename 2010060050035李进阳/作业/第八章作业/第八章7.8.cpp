#include<iostream>
using namespace std;
class employee
{
protected:
     char name[20];
	 int individualEmpNo;
	 double accumPay;
	 static int employeeNo;
public:
     employee();
	 void pay();
	 void SetName(char *);
	 char * GetName();
	 int GetindividualEmpNo();
	 double GetaccumPay();
};

class technichan:public employee
{
private:
     double hourlyRate;
	 int workHours;
public:
     technichan();
	 void SetworkHours(int wh);
	 void pay();  	 	
};

class salesman:virtual public employee
{
protected:
     double CommRate;
	 double sales;
public:
     salesman();
	 void Setsales(double s1);
	 void pay();
};

class manager:virtual public employee
{
protected:
     double monthlyPay;
public:
     manager();
	 void pay();	 	
};

class salesmanager:public manager,public salesman
{
public:
     salesmanager();
	 void pay();	
};

int employee::employeeNo=100;
employee::employee()
{
	individualEmpNo=employeeNo++;
	accumPay=0.0;
}

void employee::pay(){}
void employee::SetName(char * names)
	{strcpy(name,names);}
char * employee::GetName(){return name;}

int employee::GetindividualEmpNo()
	{return individualEmpNo;}

double employee::GetaccumPay()
	{return accumPay;}

technichan::technichan()
{   hourlyRate=100;}

void technichan::SetworkHours(int wh)
{    workHours=wh;}

void technichan::pay()
{    accumPay=hourlyRate*workHours;}

salesman::salesman()
{    CommRate=0.04;}

void salesman::Setsales(double s1)
{    sales=s1; }

void salesman::pay()
{    accumPay=sales*CommRate;}

manager::manager()
{    monthlyPay=8000;}		 

void manager::pay()
{    accumPay=monthlyPay;}

salesmanager::salesmanager()
{    monthlyPay=5000;
	 CommRate=0.005;
}

void salesmanager::pay()
{
	accumPay=monthlyPay+CommRate*sales;
}

int main()
{
	manager m1;
	technichan t1;
	salesmanager sm1;
	salesman s1;
	m1.SetName("Tim");
	t1.SetName("micheal");
	sm1.SetName("kobe");
	s1.SetName("brooks");
	
	m1.pay();
	
	cout<<"�����뼼����Ա"<<t1.GetName()<<"���µĹ���ʱ��:";
	int wt;
	cin>>wt;
	t1.SetworkHours(wt);
	t1.pay();
	
	cout<<"���������۾���"<<sm1.GetName()<<"����Ͻ���ŵ��������ܶ�:";
	float s;
	cin>>s;
	sm1.Setsales(s);
	sm1.pay();
	
	cout<<"����������Ա"<<s1.GetName()<<"���µ����۶�:";
	cin>>s;
	s1.Setsales(s);
	s1.pay();
	
	cout<<"���"<<m1.GetindividualEmpNo()<<m1.GetName()
	<<"���¹���"<<m1.GetaccumPay()<<endl;
	
	cout<<"���"<<t1.GetindividualEmpNo()<<t1.GetName()
	<<"���¹���"<<t1.GetaccumPay()<<endl; 
	
	cout<<"���"<<sm1.GetindividualEmpNo()<<sm1.GetName()
	<<"���¹���"<<sm1.GetaccumPay()<<endl; 
	
	cout<<"���"<<s1.GetindividualEmpNo()<<s1.GetName()
	<<"���¹���"<<s1.GetaccumPay()<<endl; 
}
	
