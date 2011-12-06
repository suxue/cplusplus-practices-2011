#include<iostream>
using namespace std;
class Inf{
	public:
	char Name[10];
	int No;
	double Wage;
	Inf(int b){
		this->No=b;
	}
	void Getname(char* M){
		strcpy(Name,M);
	}
	void show(){
		cout<<Name<<" "<<No<<" "<<Wage<<endl;}
};
class Manager:public Inf
{
	public:
	Manager(int No,double Wage):Inf(No)
	{
		this->Wage=Wage;
	}
};
class technician:public Inf{
	private:
	double hour;
	public:
	technician(int No,double hour):Inf(No)
 	{
 		Wage=100*hour; 
	 }
};
class salesman:public Inf{
	private:
	double salesvalue;
	public:
	salesman(int No,double salesvalue):Inf(No)
	{
		Wage=salesvalue*4/100;
	}
};
class salesmanager:public Inf{
	private:
	double salesvalue;
	public:
	salesmanager(int No,double salesvalue):Inf(No)
	{
		Wage=salesvalue*4/100+5000; 
	}
};
int main()
{
	Manager M(111,8000);
	M.Getname("AAA");
	M.show();
	technician T(222,20);
	T.Getname("BBB");
	T.show();
	salesman S(333,3000);
	S.Getname("CCC");
	S.show();
	salesmanager SM(444,3000);
	SM.Getname("DDD");
	SM.show();
	return 0;
}