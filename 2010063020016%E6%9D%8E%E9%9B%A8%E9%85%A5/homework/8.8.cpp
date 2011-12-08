#include<iostream>
#include<iomanip>
const unsigned AprilAccount=200000;
const int N=15;
using namespace std;
class Manager  //经理类
{
public:
void setting(int NewNumber,char *NewName,unsigned NewSalary);
void print();
private:
int serial_number;
char name[N];
unsigned salary;
};
void Manager::setting(int NewNumber,char *NewName,unsigned NewSalary)
{
serial_number=NewNumber;
salary=NewSalary;
int i;
for(i=0;NewName[i]!='\0'&&i!=N-1;i++)
name[i]=NewName[i];
name[i]='\0';
}
void Manager::print()
{
cout<<"Number:"<<setw(5)<<serial_number<<"\tName:"<<name<<"\tSalary:"<<salary<<"\tJob:Manager"<<endl;
}

class technology //兼职技术人员类
{
public:
void setting(int NewNumber,char *NewName,unsigned NewWorkTime);
void print();
private:
int serial_number;
char name[N];
unsigned salary;
unsigned WorkTime;
};

void technology::setting(int NewNumber,char *NewName,unsigned NewWorkTime)
{
serial_number=NewNumber;
WorkTime=NewWorkTime;
salary=100*WorkTime;
int i;
for(i=0;NewName[i]!='\0'&&i!=N-1;i++)
name[i]=NewName[i];
name[i]='\0';
}
void technology::print()
{
cout<<"Number:"<<setw(5)<<serial_number<<"\tName:"<<name<<"\tSalary:"<<salary<<"\tJob:technology"<<endl;
}

class sellsman  //销售人员类
{
public:
void setting(int NewNumber,char *NewName,unsigned NewAccount);
void print();
private:
int serial_number;
char name[N];
unsigned salary;
unsigned Account;
};
void sellsman::setting(int NewNumber,char *NewName,unsigned NewAccount)
{
serial_number=NewNumber;
salary=NewAccount*0.04;
int i;
for(i=0;NewName[i]!='\0'&&i!=N-1;i++)
name[i]=NewName[i];
name[i]='\0';
}
void sellsman::print()
{
cout<<"Number:"<<setw(5)<<serial_number<<"\tName:"<<name<<"\tSalary:"<<salary<<"\tJob:sellsman"<<endl;
}

class sellsman_manager  //销售经理类
{
public:
void setting(int NewNumber,char *NewName,unsigned NewAccount);
void print();
private:
int serial_number;
char name[N];
unsigned salary;
unsigned Account;
};
void sellsman_manager::setting(int NewNumber,char *NewName,unsigned NewAccount)
{
serial_number=NewNumber;
salary=NewAccount*0.05+5000;
int i;
for(i=0;NewName[i]!='\0'&&i!=N-1;i++)
name[i]=NewName[i];
name[i]='\0';
}
void sellsman_manager::print()
{
cout<<"Number:"<<setw(5)<<serial_number<<"\tName:"<<name<<"\tSalary:"<<salary<<"\tJob:sellsmanager"<<endl;
}

int main()
{
Manager manager1;
char a[4][N]={"Smith","Washionton","Jacobii","Lagrange"};
cout<<"-----------------TABLE OF APRIL SALARY----------------------\n";
manager1.setting(101,a[0],8000);
manager1.print();
technology technology1;
technology1.setting(102,a[1],40);
technology1.print();
sellsman sellsman1;
sellsman1.setting(103,a[2],AprilAccount);
sellsman1.print();
sellsman_manager sellsmanager1;
sellsmanager1.setting(104,a[3],AprilAccount);
sellsmanager1.print();
}
