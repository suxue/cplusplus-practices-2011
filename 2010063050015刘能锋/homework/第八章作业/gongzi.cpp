/*第7题，(8) 
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class Employee{
public:
	char *p;
	int num;
	char name[20];
	Employee(){
	  p=new char[20];
	  if(!p) printf("内存分配失败\n");
	}
};
class Manager:public Employee{
public:
	Manager():Employee(){
     p=new char[20];
	  if(!p) printf("内存分配失败\n");
	strcpy(p,"经理");
	}
	void Getname(char *q){
	strcpy(name,q);
	}
	void Getnum( int d){
	num=d;
	}
    void Show(){
	cout<<"职位:  "<<p<<endl;
	cout<<"名字:  "<<name<<endl;
	cout<<"编号:  "<<num<<endl;
	cout<<"月工资:  "<<"8000"<<endl;
	}
};
class Technician:public Employee{
private:
	int houers;
public:
	Technician():Employee(){
		strcpy(p,"技术人员");
	}
	void Sethouer( int d){
	houers=d;
	}
	void Getname(char *q){
	strcpy(name,q);
	}
	void Getnum( int d){
	num=d;
	}
    void Show(){
	cout<<"职位:  "<<p<<endl;
	cout<<"名字:  "<<name<<endl;
	cout<<"编号:  "<<num<<endl;
	cout<<"月工资:  "<<100*houers<<endl;
	}
};
class Salesman:public Employee{
private:
	int sale;
public:
	Salesman():Employee(){
	strcpy(p,"销售员");
	}
  void Getname(char *q){
	strcpy(name,q);
	}
  void Setsale( int d){
	sale=d;
	}
	void Getnum( int d){
	num=d;
	}
    void Show(){
	cout<<"职位:  "<<p<<endl;
	cout<<"名字:  "<<name<<endl;
	cout<<"编号:  "<<num<<endl;
	cout<<"月工资:  "<<sale*0.04<<endl;
	}
};
class Salesmanager:public Employee{
	public:
		int totalsale;
	Salesmanager():Employee(){
		strcpy(p,"销售经理");}
	void Getname(char *q){
	strcpy(name,q);
	}
  void Settotalsale( int d){
	totalsale=d;
	}
	void Getnum( int d){
	num=d;
	}
    void Show(){
	cout<<"职位:  "<<p<<endl;
	cout<<"名字:  "<<name<<endl;
	cout<<"编号:  "<<num<<endl;
	cout<<"月工资:  "<<totalsale*0.005+5000<<endl;
	}

};
int main()
{  Manager mer1;
  Technician tm1;
  Salesman sa1;
  Salesmanager samer1;
   char *q;
   q=new char[20];
    if(!q) printf("内存分配失败\n");
   int temp;
  cout<<"请输入经理的名字"<<endl;
  scanf("%s",q);
  mer1.Getname(q);
  cout<<"请输入经理的编号"<<endl;
  cin>>temp;
  mer1.Getnum(temp);
  mer1.Show();
  
  cout<<endl;
  cout<<"请输入技术人员的名字"<<endl;
  scanf("%s",q);
  tm1.Getname(q);
  cout<<"请输入技术人员的编号"<<endl;
  cin>>temp;
  tm1.Getnum(temp);
  cout<<"请输入技术人员的工作时间"<<endl;
  cin>>temp;
  tm1.Sethouer(temp);
  tm1.Show();

  cout<<endl;
  cout<<"请输入销售员的名字"<<endl;
  scanf("%s",q);
  sa1.Getname(q);
  cout<<"请输入销售员的编号"<<endl;
  cin>>temp;
  sa1.Getnum(temp);
  cout<<"请输入销售员的销售额"<<endl;
  cin>>temp;
  sa1.Setsale(temp);
  sa1.Show();

  cout<<endl;
  cout<<"请输入销售经理的名字"<<endl;
  scanf("%s",q);
  samer1.Getname(q);
  cout<<"请输入销售经理的编号"<<endl;
  cin>>temp;
  samer1.Getnum(temp);
  cout<<"请输入销售经理所管辖部门的销售额"<<endl;
  cin>>temp;
  samer1.Settotalsale(temp);
  samer1.Show();
  system("pause");
}