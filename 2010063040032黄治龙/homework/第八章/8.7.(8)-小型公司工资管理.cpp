//С�͹�˾�Ĺ��ʹ���

#include <iostream>

using namespace std;

void showmenu(){
	cout<<"***********************************************"<<endl;
	cout<<"*	 	  1.����ְԱ��Ϣ              *"<<endl;
	cout<<"*	 	  2.��ʾְԱ��Ϣ              *"<<endl;
	cout<<"***********************************************"<<endl;
}

void showmenu2(){
	cout<<"***********************************************"<<endl;
	cout<<"*	      1.����������Ϣ	          *"<<endl;
	cout<<"*	      2.����������Ա��Ϣ	      *"<<endl;
	cout<<"*	      3.��������Ա��Ϣ		      *"<<endl;
	cout<<"*	      4.�������۾�����Ϣ	      *"<<endl;
	cout<<"*	      5.������һ�β˵�		      *"<<endl;
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
		cout<<"������Ϣ�����ɹ�"<<endl;
	}
	double GetSalary(){
		return 8000;
	}
	friend ostream & operator << (ostream & theStream,Manager c1){				//��Ԫ�������������<<
		cout<<"  ";
		theStream<<"��ţ�"<<c1.GetNu();
		cout<<"  ";
		theStream<<"����������"<<c1.GetName();
		cout<<"  ";
		theStream<<"���ʣ�"<<c1.GetSalary();
		return theStream;
	}
};

class Salesman:public Employee{
private:
	double SaleCo;
public:
	Salesman(int nu,char* name,double SaleCo):Employee(nu,name){
		this->SaleCo=SaleCo;
		cout<<"����Ա��Ϣ�����ɹ�"<<endl;
	}
	double GetSalary(){
		return 4/100*SaleCo;
	}
	friend ostream & operator << (ostream & theStream,Salesman c1){				//��Ԫ�������������<<
		cout<<"  ";
		theStream<<"��ţ�"<<c1.GetNu();
		cout<<"  ";
		theStream<<"����Ա������"<<c1.GetName();
		cout<<"  ";
		theStream<<"���ʣ�"<<c1.GetSalary();
		return theStream;
	}
};

class Technician:public Employee{
private:
	int WorkTime;
public:
	Technician(int nu,char* name,int WorkTime):Employee(nu,name){
		this->WorkTime=WorkTime;
		cout<<"������Ա��Ϣ�����ɹ�"<<endl;
	}
	double GetSalary(){
		return 100*WorkTime;
	}
	friend ostream & operator << (ostream & theStream,Technician c1){				//��Ԫ�������������<<
		cout<<"  ";
		theStream<<"��ţ�"<<c1.GetNu();
		cout<<"  ";
		theStream<<"������Ա������"<<c1.GetName();
		cout<<"  ";
		theStream<<"���ʣ�"<<c1.GetSalary();
		return theStream;
	}
};

class Salesmanager:public Employee{
private:
	double SaleMo;
public:
	Salesmanager(int nu,char* name,double SaleMo):Employee(nu,name){
		this->SaleMo=SaleMo;
		cout<<"���۾�����Ϣ�����ɹ�"<<endl;
	}
	double GetSalary(){
		return 5000+5/100*SaleMo;
	}
	friend ostream & operator << (ostream & theStream,Salesmanager c1){				//��Ԫ�������������<<
		cout<<"  ";
		theStream<<"��ţ�"<<c1.GetNu();
		cout<<"  ";
		theStream<<"���۾���������"<<c1.GetName();
		cout<<"  ";
		theStream<<"���ʣ�"<<c1.GetSalary();
		return theStream;
	}
};

int main() {				//������
	Manager* A[30];
    Technician* B[30];
	Salesman* C[30];
	Salesmanager* D[30];
	int counta=0,countb=0,countc=0,countd=0;

	int input;
	while(1){
		showmenu();				//�г��˵�
		cout<<"******��������Ӧ�����  :  ";
		cin>>input;
		if(input==1){				//ִ�д���ְ����Ϣ����
			while(1){
				showmenu2();
				cout<<"******��������Ӧ�����  :  ";
				cin>>input;
				if(input==1){
					int nu;
					char name[30];
					cout<<"****�������ţ�";
					cin>>nu;
					cout<<"****������������";
					cin>>name;
					Manager a(nu,name);
					A[counta]=&a;
					counta++;
					break;
				}
				else if(input==2){
					int nu,worktime;
					char name[30];
					cout<<"****�������ţ�";
					cin>>nu;
					cout<<"****������������";
					cin>>name;
					cout<<"****�����빤��ʱ�䣺";
					cin>>worktime;
					Technician b(nu,name,worktime);
					B[countb]=&b;
					countb++;
					break;
				}
				else if(input==3){
					int nu,saleco;
					char name[30];
					cout<<"****�������ţ�";
					cin>>nu;
					cout<<"****������������";
					cin>>name;
					cout<<"****�����������۶";
					cin>>saleco;
					Salesman c(nu,name,saleco);
					C[countc]=&c;
					countc++;
					break;
				}
				else if(input==3){
					int nu,salemo;
					char name[30];
					cout<<"****�������ţ�";
					cin>>nu;
					cout<<"****������������";
					cin>>name;
					cout<<"****����������Ͻ���ŵ������۶";
					cin>>salemo;
					Salesmanager d(nu,name,salemo);
					D[countd]=&d;
					countd++;
					break;
				}
				else break;
			}
		}
		else if(input==2){				//ִ����ʾְ����Ϣ����
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
			cout<<"******����"<<0<<"�ɷ�����һ��Ŀ¼******"<<endl;
			cout<<"******����"<<1<<"�˳�������******"<<endl;
			cin>>re;
			while(re!=0&&re!=1){
				"******������������������******";
				cin>>re;
			}
			if(re==1)	exit(-1);
		}
		continue;
	}
	return 0;
}


