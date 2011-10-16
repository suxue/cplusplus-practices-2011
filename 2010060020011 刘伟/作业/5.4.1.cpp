#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int A[10],i,a,j=0,k=0;
	for(i=1;i<=10;i++)
	{
		cout<<"输入"<<i<<"第个数：";
		cin>>a;
		if(a%2!=0)
		{
			A[k]=a;
			k++; 
		} 
		else
		{
			A[9-j]=a;
			j++;
		} 	
	}
	for(i=1;i<k;i++)
	for(int s=0;s<k-i;s++)
	{
		int temp;
		if(A[s]>A[s+1])
		{
			temp=A[s];
			A[s]=A[s+1];
			A[s+1]=temp;
		}	
	}
	for(i=1;i<j;i++)
	for(int s=0;s<j-i;s++)
	{
		int temp;
		if(A[k+s]>A[k+s+1])
		{
            temp=A[s+k];
			A[s+k]=A[s+1+k];
			A[s+1+k]=temp;	
		}
	}
	for(i=0;i<10;i++)
	  cout<<A[i]<<endl;
	  system("pause");
	return 0;	
}
