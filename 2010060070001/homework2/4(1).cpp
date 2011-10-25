#include<iostream.h>
int main()
{
	int a[10];
	int n;//n is the number you want to enter
	int i,j;
	cout<<"enter the numbers please:"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>n;
		a[i]=n;
	}
	for(i=1;i<=n-1;i++)
		for(j=i+1;j<10;j++)
			if((a[i]%2==a[j]%2&&a[i]>a[j])||a[i]%2<a[j]%2)
			{
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	cout<<"after sequencing:"<<endl;
	for(i=0;i<10;i++)
		cout<<a[i]<<"\t";
	return 0;
}
	



