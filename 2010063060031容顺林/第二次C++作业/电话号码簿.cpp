#include<iostream>
#include<string>
#include<iomanip> 
#define MaxSize 4
#define N 21
#define M 22
using namespace std;
struct TBook
{
	 char Name[MaxSize][N];
	 char Num[MaxSize][M]; 
};
int main()
{
	TBook T1;
	long MM;
	cout<<"please input the Name,the Maxsize Num is "<<MaxSize<<endl;
	for(int i=0;i<MaxSize;i++)
	{
		cout<<"第"<<i+1<<"个"<<"名字"<<endl; 
		cin.getline(T1.Name[i],N);
	}
		cout<<"please input the Num,the Maxsize Num is:"<<MaxSize<<endl;
	
	for(int i=0;i<MaxSize;i++)
	{
		cout<<"第"<<i+1<<"个"<<"号码"<<endl; 
		cin.getline(T1.Num[i],M); 
	}
	int i;
	int m;
	int t; 
	cout<<"如果你想查找，请输入：1-代表按姓名查找，2-代表按号码查找"<<endl;
	cin>>i;cin.get();
	switch(i)
	{
	case 1:
	{      
	       char a[N];
		   cout<<"请输入你想查找的姓名"<<endl;
	       cin.getline(a,N);
	       t=strlen(a);
	       for(int i=0;i<MaxSize;i++)
	       {
	       	if (strnicmp(a,T1.Name[i],t)==0)
	       	cout<<T1.Name[i]<<"的号码是:"<<T1.Num[i]<<endl;
		   }
	}
		   break; 
	case 2:
	{
	cout<<"请输入你想查找的号码"<<endl;
           char Nu[M];
	       cin.getline(Nu,M);
	       int q=strlen(Nu);
	       for(int i=0;i<MaxSize;i++)
	       {
	       	if (strnicmp(Nu,T1.Num[i],q)==0)
	       	cout<<T1.Name[i]<<"的号码是:"<<T1.Num[i]<<endl;
		   }
	}
	     
		   break;
	}
	
	
}

