#include<iostream.h>
#include<malloc.h>
using namespace std;
int main()
{
	int n[10];
	cout<<"请输入10个整数"<<endl;
	int i;
	for(i=0;i<10;i++)
	cin>>n[i];
	int d,s;
	for(i=0;i<10;i++)
	{
		if(n[i]%2==0)  s++;
	}
	d=10-s;
	int *ps,*pd;
	ps=(int*)malloc(4*s);
	int j=0;
	for(i=0;i<10;i++)
	{
		if(n[i]%2==0)
		{
			ps[j]=n[i];
			j++;
		}
	}
	pd=(int*)malloc(4*d);
	for(i=0,j=0;i<10;i++)
	{
		if(n[i]%2==1)
		{
			pd[j]=n[i];
			j++;
		}
	}
	int temp;
	for(i=0;i<s;i++)
	{
		for(j=0;j<s-i-1;j++)
		{
			if(ps[j]>ps[j+1])
			{
				temp=ps[j];
				ps[j]=ps[j+1];
				ps[j+1]=temp;
			}
		}
	}
	for(i=0;i<d;i++)
	{
		for(j=0;j<d-i-1;j++)
		{
			if(pd[j]>pd[j+1])
			{
				temp=pd[j];
				pd[j]=pd[j+1];
				pd[j+1]=temp;
			}
		}
	}
	for(i=0;i<d;i++)  cout<<pd[i]<<" ";
	for(i=0;i<s;i++)  cout<<ps[i]<<" ";
	return 0;
}