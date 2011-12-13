#include<iostream>
using namespace std;
class employee
{
	protected:
	char *number;
	char  *name;
	public:                
	employee(char *num, char *nam)
	{	
		number=num;           
		name=nam;
	}
	void show()
	{
		cout<<"number:"<<number<<endl<<"name:"<<name<<endl;
	}
};
class manager:public employee
{
	public:
	int wage;
	public:
	manager(char *a,char *b, int c):employee(a, b)  
	{
		wage=c;
	}
	void showmwage()
	{
		show();
		cout<<"wage of manager:";
		cout<<wage<<endl;
	}
};
	class technician:public employee
	{
        public:
		int sale;
		int wage;
		public:
		technician(char *a,char *b, int d):employee(a, b)
		{
			sale=d;	
		}
	void showtwage()
		{
			show();
			wage=sale*100;
			cout<<"wage:"<<wage<<endl;
		}
	};
class salesman:public employee
	{
	public:
	int sale,wage;
	public:
	salesman(char *a,char *b,int d):employee(a, b)     
	{
		sale=d;
	}
	void showswage()
	{
		        show();
                        cout<<"wage of salesman:";
			cout<<"wage:"<<0.04*sale<<endl;
	}
};
class salemanager:public employee
	{
		public:
		int solidwage,admsale;
		public:
		salemanager(char *a,char *b,int d, int e):employee(a,b)
		{
				solidwage=d;
				admsale=e;
		}
	void showsmwage()
	{
           show();
          cout<<"wage of salesmanager:";
			cout<<"wage:"<<0.005*admsale+solidwage<<endl;
	}
};
int main()
{
	char a[8];
	char b[10];
	cout<<"经理工资："<<endl;
	cout<<"请输入姓名:";
	cin>>a;
	cout<<"请输入编号:";
	cin>>b;
	manager ma(&b[0],&a[0],8000);
	ma.showmwage();  
	cout<<"技术人员："<<endl; 
    cout<<"请输入姓名:";
	cin>>a;
	cout<<"请输入编号:";
	cin>>b;
	technician  te(&b[0],&a[0],40);
	te.showtwage(); 
	cout<<"销售员工资："<<endl;
	cout<<"请输入姓名:";
	cin>>a;
	cout<<"请输入编号:";
	cin>>b;
	salesman sm (&b[0],&a[0],80000);
	sm.showswage();
    cout<<"销售经理工资："<<endl;
	cout<<"请输入姓名:";
	cin>>a;
	cout<<"请输入编号:";
	cin>>b;
	salemanager  smr(&b[0],&a[0],3000,100000);
	smr.showsmwage(); 
       
	return 0;
}
