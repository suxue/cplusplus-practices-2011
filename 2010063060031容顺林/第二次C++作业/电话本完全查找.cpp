#include<iostream>
#include<string>
#define MaxSize 2
using namespace std;
 struct TBook
{
	string Name[MaxSize];
	long Num[MaxSize]; 
};
TBook *p1; 
int FindName(string a,TBook *p1)
{ 
     int i;
     int temp=0;
for(i=0;i<MaxSize;i++)
{
   if(a==p1->Name[i])
  	{  temp=1; 
       return i;
       break;
  	}
}
		   if(temp==0)
		   i=MaxSize+1;
}
int FindNum(long b,TBook *p1)
{ 
     int i;
     int temp=0;
for(i=0;i<MaxSize;i++)
{
   if(b==p1->Num[i])
  	{  temp=1; 
       return i;
       break;
  	}
}
		   if(temp==0)
		   i=MaxSize+1;
}


int main()
{
	TBook T1;
	TBook *p1;
	p1=&T1; 
	cout<<"please input the Name,the Maxsize Num is "<<MaxSize<<endl;
	
	for(int i=0;i<MaxSize;i++)
	{
		cout<<"��"<<i+1<<"��"<<"����"<<endl; 
		cin>>T1.Name[i];
	}
		cout<<"please input the Num,the Maxsize Num is:"<<MaxSize<<endl;
	
	for(int i=0;i<MaxSize;i++)
	{
		cout<<"��"<<i+1<<"��"<<"����"<<endl; 
		cin>>T1.Num[i];
	}
	int i;
	string a;
	int m;
	long b; 
	cout<<"���������ң������룺1-�����������ң�2-�����������"<<endl;
	cin>>i;
	switch(i)
	{
	case 1:cout<<"������������ҵ�����"<<endl;
	       cin>>a;
           m=FindName(a,p1);
		   if(m==MaxSize+1)
	       cout<<"����˲�����"<<endl;
		   else
		   cout<<p1->Name[m]<<"�ĺ�����:"<<p1->Num[m]<<endl;
		   break; 
	case 2:cout<<"������������ҵĺ���"<<endl;
	       cin>>b;
	       m=FindNum(b,p1);
	       if(m==MaxSize+1)
	       cout<<"������벻����"<<endl;
		   else
		   cout<<p1->Name[m]<<"�ĺ�����:"<<p1->Num[m]<<endl;
		   break;
	
	}
	
	
}

