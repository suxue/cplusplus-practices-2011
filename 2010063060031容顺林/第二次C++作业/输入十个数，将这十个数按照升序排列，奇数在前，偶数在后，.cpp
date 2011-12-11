#include<iostream>
using namespace std;
int main()
{
cout<<"plrease input ten numbers"<<endl;
int a[10],b=0;
for(int i=0;i<10;i++)
{
	cin>>a[i];
	if(a[i]%2==0)
	b++; 
	
}
int *p1=new int [b];
int *p2=new int [10-b];
for(int j=0;j<9;j++)
{
for(int i=j+1;i<10;i++)
{
	if(a[j]>a[i])
	{
		int temp;
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
}
}
cout<<"out put the right order of the ten numbers"<<endl;
for(int i=0;i<10;i++)
{
	cout<<" "<<a[i]; 
}
cout<<"\n";
 int c=0,d=0;
for(int i=0;i<10;i++)
{
	if(a[i]%2==0)
	{   
		p1[c]=a[i];
		c++;
		
	}
	if(a[i]%2!=0)
	{  
		p2[d]=a[i];
		d++;
		
	}
	 
}
cout<<"output"<<endl;
for(int i=0;i<10-b;i++)
{
	cout<<" "<<p2[i];
}
cout<<"\n";
for(int i=0;i<b;i++)
{
	cout<<" "<<p1[i];
}




} 
