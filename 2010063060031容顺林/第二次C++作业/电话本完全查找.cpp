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
		cout<<"第"<<i+1<<"个"<<"名字"<<endl; 
		cin>>T1.Name[i];
	}
		cout<<"please input the Num,the Maxsize Num is:"<<MaxSize<<endl;
	
	for(int i=0;i<MaxSize;i++)
	{
		cout<<"第"<<i+1<<"个"<<"号码"<<endl; 
		cin>>T1.Num[i];
	}
	int i;
	string a;
	int m;
	long b; 
	cout<<"如果你想查找，请输入：1-代表按姓名查找，2-代表按号码查找"<<endl;
	cin>>i;
	switch(i)
	{
	case 1:cout<<"请输入你想查找的姓名"<<endl;
	       cin>>a;
           m=FindName(a,p1);
		   if(m==MaxSize+1)
	       cout<<"这个人不存在"<<endl;
		   else
		   cout<<p1->Name[m]<<"的号码是:"<<p1->Num[m]<<endl;
		   break; 
	case 2:cout<<"请输入你想查找的号码"<<endl;
	       cin>>b;
	       m=FindNum(b,p1);
	       if(m==MaxSize+1)
	       cout<<"这个号码不存在"<<endl;
		   else
		   cout<<p1->Name[m]<<"的号码是:"<<p1->Num[m]<<endl;
		   break;
	
	}
	
	
}

