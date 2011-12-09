//小型公司的工资管理

#include <iostream>

using namespace std;

void showmenu(){
	cout<<"***********************************************"<<endl;
	cout<<"*	 	  1.创建职员信息              *"<<endl;
	cout<<"*	 	  2.显示职员信息              *"<<endl;
	cout<<"***********************************************"<<endl;
}

void showmenu2(){
	cout<<"***********************************************"<<endl;
	cout<<"*	      1.创建经理信息	          *"<<endl;
	cout<<"*	      2.创建技术人员信息	      *"<<endl;
	cout<<"*	      3.创建销售员信息		      *"<<endl;
	cout<<"*	      4.创建销售经理信息	      *"<<endl;
	cout<<"*	      5.返回上一次菜单		      *"<<endl;
	cout<<"***********************************************"<<endl;
}


class Employee{
private:
	int nu;
	char name[30];
	double Salary;
public:
	Employee(int nu,char* name){
		this->nu=nu;
		strcpy(this->name,name);
	}
	int GetNu(){
		return this->nu;
	}
	char* GetName(){
		return this->name;
	}
	virtual double GetSalary()=0;
};

class Manager:public Employee{
public:
	Manager(int nu,char* name):Employee(nu,name){
		cout<<"经理信息创建成功"<<endl;
	}
	double GetSalary(){
		return 8000;
	}
	friend ostream & operator << (ostream & theStream,Manager c1){				//友元函数重载运算符<<
		cout<<"  ";
		theStream<<"编号："<<c1.GetNu();
		cout<<"  ";
		theStream<<"经理姓名："<<c1.GetName();
		cout<<"  ";
		theStream<<"工资："<<c1.GetSalary();
		return theStream;
	}
};

class Salesman:public Employee{
private:
	double SaleCo;
public:
	Salesman(int nu,char* name,double SaleCo):Employee(nu,name){
		this->SaleCo=SaleCo;
		cout<<"销售员信息创建成功"<<endl;
	}
	double GetSalary(){
		return 4/100*SaleCo;
	}
	friend ostream & operator << (ostream & theStream,Salesman c1){				//友元函数重载运算符<<
		cout<<"  ";
		theStream<<"编号："<<c1.GetNu();
		cout<<"  ";
		theStream<<"销售员姓名："<<c1.GetName();
		cout<<"  ";
		theStream<<"工资："<<c1.GetSalary();
		return theStream;
	}
};

class Technician:public Employee{
private:
	int WorkTime;
public:
	Technician(int nu,char* name,int WorkTime):Employee(nu,name){
		this->WorkTime=WorkTime;
		cout<<"技术人员信息创建成功"<<endl;
	}
	double GetSalary(){
		return 100*WorkTime;
	}
	friend ostream & operator << (ostream & theStream,Technician c1){				//友元函数重载运算符<<
		cout<<"  ";
		theStream<<"编号："<<c1.GetNu();
		cout<<"  ";
		theStream<<"技术人员姓名："<<c1.GetName();
		cout<<"  ";
		theStream<<"工资："<<c1.GetSalary();
		return theStream;
	}
};

class Salesmanager:public Employee{
private:
	double SaleMo;
public:
	Salesmanager(int nu,char* name,double SaleMo):Employee(nu,name){
		this->SaleMo=SaleMo;
		cout<<"销售经理信息创建成功"<<endl;
	}
	double GetSalary(){
		return 5000+5/100*SaleMo;
	}
	friend ostream & operator << (ostream & theStream,Salesmanager c1){				//友元函数重载运算符<<
		cout<<"  ";
		theStream<<"编号："<<c1.GetNu();
		cout<<"  ";
		theStream<<"销售经理姓名："<<c1.GetName();
		cout<<"  ";
		theStream<<"工资："<<c1.GetSalary();
		return theStream;
	}
};

int main() {				//主函数
	Manager* A[30];
    Technician* B[30];
	Salesman* C[30];
	Salesmanager* D[30];
	int counta=0,countb=0,countc=0,countd=0;

	int input;
	while(1){
		showmenu();				//列出菜单
		cout<<"******请输入相应的序号  :  ";
		cin>>input;
		if(input==1){				//执行创建职工信息操作
			while(1){
				showmenu2();
				cout<<"******请输入相应的序号  :  ";
				cin>>input;
				if(input==1){
					int nu;
					char name[30];
					cout<<"****请输入编号：";
					cin>>nu;
					cout<<"****请输入姓名：";
					cin>>name;
					Manager a(nu,name);
					A[counta]=&a;
					counta++;
					break;
				}
				else if(input==2){
					int nu,worktime;
					char name[30];
					cout<<"****请输入编号：";
					cin>>nu;
					cout<<"****请输入姓名：";
					cin>>name;
					cout<<"****请输入工作时间：";
					cin>>worktime;
					Technician b(nu,name,worktime);
					B[countb]=&b;
					countb++;
					break;
				}
				else if(input==3){
					int nu,saleco;
					char name[30];
					cout<<"****请输入编号：";
					cin>>nu;
					cout<<"****请输入姓名：";
					cin>>name;
					cout<<"****请输入月销售额：";
					cin>>saleco;
					Salesman c(nu,name,saleco);
					C[countc]=&c;
					countc++;
					break;
				}
				else if(input==3){
					int nu,salemo;
					char name[30];
					cout<<"****请输入编号：";
					cin>>nu;
					cout<<"****请输入姓名：";
					cin>>name;
					cout<<"****请输入所管辖部门当月销售额：";
					cin>>salemo;
					Salesmanager d(nu,name,salemo);
					D[countd]=&d;
					countd++;
					break;
				}
				else break;
			}
		}
		else if(input==2){				//执行显示职工信息操作
			int i,j,k,m,re;
			for(i=0;i<counta;i++){
				cout<<i+1<<(*A[i])<<endl;
			}
			for(j=0;j<countb;j++){
				cout<<j+1<<(*B[j])<<endl;
			}
			for(k=0;k<countc;k++){
			cout<<k+1<<(*C[k])<<endl;
			}
			for(m=0;m<countd;m++){
			cout<<m+1<<(*D[m])<<endl;
			}
			cout<<"******输入"<<0<<"可返回上一级目录******"<<endl;
			cout<<"******输入"<<1<<"退出本程序******"<<endl;
			cin>>re;
			while(re!=0&&re!=1){
				"******操作有误，请重新输入******";
				cin>>re;
			}
			if(re==1)	exit(-1);
		}
		continue;
	}
	return 0;
}


