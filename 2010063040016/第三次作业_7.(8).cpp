#include<iostream.h>
using namespace std;
class employee
{
	protected:
	float wages;
	int num;
	char name[10];
	public:
	employee()
	{
		num=0;
		wages=0;
	}
	void setname()
	{
		cout<<"请输入姓名"<<endl;
		char *p=name;
		cin>>p;
	}
	void setnum()
	{
		cout<<"请输入编号"<<endl;
		cin>>num;
	}
	void getwages()
	{
		cout<<"当月薪水是:"<<wages<<endl;
	}
};
class manager:public employee
{
	public:
	void getwages()
	{
		wages=8000;
		cout<<"经理当月薪水是:"<<wages<<endl;
	}
};
class selesman:public employee
{
	public:
	void getwages(float bringin)
	{
	  wages=bringin*0.04; 
	  cout<<"销售人员当月工资是："<<wages<<endl;	
	}
};
class tech:public employee
{
	public:
	void getwages(int hour)
	{
		wages=hour*100;
		cout<<"技术人员当月工资是："<<wages<<endl; 
	}
};
class selesmanager:public employee
{
	public:
	void getwages(float bringin)
	{
		wages=5000+bringin*0.04;
		cout<<"销售经理当月工资是："<<wages<<endl;
	}
};
int main()
{
	manager Dante;
	tech Lily;
	selesman Nero;
	selesmanager vergil;
	float money=10000;
	Dante.getwages();
	Lily.getwages(176);
	Nero.getwages(money);
	vergil.getwages(money);
}