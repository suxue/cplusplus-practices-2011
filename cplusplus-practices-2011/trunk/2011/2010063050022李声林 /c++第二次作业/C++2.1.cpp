#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int a[10]={0};
    int i,j,k,flag,temp;
    cout<<"输入10个整数："<<endl;
    for(i=0;i<=9;i++)
    cin>>a[i];

    for(i=1;i<n;i++)//冒泡排序
    {
       flag=0;
       for(j=0;j<n-i;j++)
       {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               flag=1;
           }
           if(flag==0)
           break;
       }
    }
    for(i=0;i<=9;i++)
           if(a[i]%2==1)
           cout<<a[i]<<" ";
    for(i=0;i<=9;i++)
           if(a[i]%2==0)
           cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
