#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],i,j=0;
	cout<<"输入10个数";
	for(i=0;i<10;i++) 
	cin>>a[i];
	for(i=0;i<10;i++)
	for(j=i+1;j<10;j++)
	if(a[i]>a[j])
	{
		int k;
		k=a[i];
		a[i]=a[j];
		a[j]=k;
	}
	j=0;
	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
	}
	cout<<"排序后为"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<b[i]<<"\t";
	}
}