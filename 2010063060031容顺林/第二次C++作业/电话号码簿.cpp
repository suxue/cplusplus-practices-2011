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
		cout<<"��"<<i+1<<"��"<<"����"<<endl; 
		cin.getline(T1.Name[i],N);
	}
		cout<<"please input the Num,the Maxsize Num is:"<<MaxSize<<endl;
	
	for(int i=0;i<MaxSize;i++)
	{
		cout<<"��"<<i+1<<"��"<<"����"<<endl; 
		cin.getline(T1.Num[i],M); 
	}
	int i;
	int m;
	int t; 
	cout<<"���������ң������룺1-�����������ң�2-�����������"<<endl;
	cin>>i;cin.get();
	switch(i)
	{
	case 1:
	{      
	       char a[N];
		   cout<<"������������ҵ�����"<<endl;
	       cin.getline(a,N);
	       t=strlen(a);
	       for(int i=0;i<MaxSize;i++)
	       {
	       	if (strnicmp(a,T1.Name[i],t)==0)
	       	cout<<T1.Name[i]<<"�ĺ�����:"<<T1.Num[i]<<endl;
		   }
	}
		   break; 
	case 2:
	{
	cout<<"������������ҵĺ���"<<endl;
           char Nu[M];
	       cin.getline(Nu,M);
	       int q=strlen(Nu);
	       for(int i=0;i<MaxSize;i++)
	       {
	       	if (strnicmp(Nu,T1.Num[i],q)==0)
	       	cout<<T1.Name[i]<<"�ĺ�����:"<<T1.Num[i]<<endl;
		   }
	}
	     
		   break;
	}
	
	
}

