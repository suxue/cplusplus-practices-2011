/*��7�⣬(8) 
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
	  if(!p) printf("�ڴ����ʧ��\n");
	}
};
class Manager:public Employee{
public:
	Manager():Employee(){
     p=new char[20];
	  if(!p) printf("�ڴ����ʧ��\n");
	strcpy(p,"����");
	}
	void Getname(char *q){
	strcpy(name,q);
	}
	void Getnum( int d){
	num=d;
	}
    void Show(){
	cout<<"ְλ:  "<<p<<endl;
	cout<<"����:  "<<name<<endl;
	cout<<"���:  "<<num<<endl;
	cout<<"�¹���:  "<<"8000"<<endl;
	}
};
class Technician:public Employee{
private:
	int houers;
public:
	Technician():Employee(){
		strcpy(p,"������Ա");
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
	cout<<"ְλ:  "<<p<<endl;
	cout<<"����:  "<<name<<endl;
	cout<<"���:  "<<num<<endl;
	cout<<"�¹���:  "<<100*houers<<endl;
	}
};
class Salesman:public Employee{
private:
	int sale;
public:
	Salesman():Employee(){
	strcpy(p,"����Ա");
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
	cout<<"ְλ:  "<<p<<endl;
	cout<<"����:  "<<name<<endl;
	cout<<"���:  "<<num<<endl;
	cout<<"�¹���:  "<<sale*0.04<<endl;
	}
};
class Salesmanager:public Employee{
	public:
		int totalsale;
	Salesmanager():Employee(){
		strcpy(p,"���۾���");}
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
	cout<<"ְλ:  "<<p<<endl;
	cout<<"����:  "<<name<<endl;
	cout<<"���:  "<<num<<endl;
	cout<<"�¹���:  "<<totalsale*0.005+5000<<endl;
	}

};
int main()
{  Manager mer1;
  Technician tm1;
  Salesman sa1;
  Salesmanager samer1;
   char *q;
   q=new char[20];
    if(!q) printf("�ڴ����ʧ��\n");
   int temp;
  cout<<"�����뾭�������"<<endl;
  scanf("%s",q);
  mer1.Getname(q);
  cout<<"�����뾭��ı��"<<endl;
  cin>>temp;
  mer1.Getnum(temp);
  mer1.Show();
  
  cout<<endl;
  cout<<"�����뼼����Ա������"<<endl;
  scanf("%s",q);
  tm1.Getname(q);
  cout<<"�����뼼����Ա�ı��"<<endl;
  cin>>temp;
  tm1.Getnum(temp);
  cout<<"�����뼼����Ա�Ĺ���ʱ��"<<endl;
  cin>>temp;
  tm1.Sethouer(temp);
  tm1.Show();

  cout<<endl;
  cout<<"����������Ա������"<<endl;
  scanf("%s",q);
  sa1.Getname(q);
  cout<<"����������Ա�ı��"<<endl;
  cin>>temp;
  sa1.Getnum(temp);
  cout<<"����������Ա�����۶�"<<endl;
  cin>>temp;
  sa1.Setsale(temp);
  sa1.Show();

  cout<<endl;
  cout<<"���������۾��������"<<endl;
  scanf("%s",q);
  samer1.Getname(q);
  cout<<"���������۾���ı��"<<endl;
  cin>>temp;
  samer1.Getnum(temp);
  cout<<"���������۾�������Ͻ���ŵ����۶�"<<endl;
  cin>>temp;
  samer1.Settotalsale(temp);
  samer1.Show();
  system("pause");
}