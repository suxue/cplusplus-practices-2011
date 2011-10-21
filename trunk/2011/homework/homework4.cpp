#include<iostream>
using namespace std;
int main(){
	int a[10],b[10],c[10];
	int l1=0,l2=0;
	int i,j,temp;
	int n=11;
	cout<<"请输入10个正整数:"<<"\n"; 
	for(n=0;n<10;n++){
		cin>>a[n];
		}
	cout<<"原始数据为:"; 
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
		cout<<"\n";
		cout<<"排列后的数据为："<<"\n";	
	for(i=0;i<n-1;i++)
	    for(j=i+1;j<n;j++)
		    if(a[i]>a[j])
				{
    			temp=a[j];
    			a[j]=a[i];
    			a[i]=temp;
   				}
	for(i=0;i<10;i++)
		{
		if(a[i]%2==0)
  		  b[l1++]=a[i];
		if(a[i]%2!=0)
		  c[l2++]=a[i];
		}
     for(i=0;i<l2;i++)
	   cout<<c[i]<<" "; 
     for(i=0;i<l1;i++)
	   cout<<b[i]<<" ";   
 	}