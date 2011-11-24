#include<iostream>
using namespace std;
class employee
{
	protected:
	//char number[10];  
	//char name[10];
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
	private:
	int wage;
	public:
	manager(char *a,char *b, int c):employee(a, b) 
	{
		wage=c;
	}
	/*int wage()           
		{
			wage1=c;
			return wage;
		}*/
	void showmwage()
	{
		//cout<<"wage of manager:";   //????show?????,??????????????

		show();
		cout<<"wage of manager:";
		cout<<wage<<endl;
	}
};

	class technician:public employee
	{
		private:
		int h;
		int wage;
		public:
		technician(char *a,char *b, int d):employee(a, b)
		{
			h=d;	
		}
		/*int wage()
		{
			wage=h*100;  
			return wage;
		}*/
		void showtwage()
		{

			show();
			wage=h*100;
			cout<<"wage:"<<wage<<endl;
		}
	};


int main()
{
	char a[8];
	char b[10];

	cout<<"?????:";
	cin>>a;
	cout<<"?????:";
	cin>>b;

	manager ma(&b[0],&a[0],8000);   //????????????????????????
	ma.showmwage();
	technician  te(&b[0],&a[0],40);
	te.showtwage();
	/*manager ma(b,a,8000);
	tachnician tech(b,a,35);
	salemanager smr(b,a,5000,1000000);
	saleman sm(b,a,100000);*/
	//cout<<"wage of different occupation:"<<ma.showmwage()<<tech.showtwage<<smr.showsmwage<<sm.showswage<<endl;//????showwage??cout?,??????????,????showwage???;

	return 0;
}

