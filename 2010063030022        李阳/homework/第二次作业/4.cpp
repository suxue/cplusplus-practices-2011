#include<iostream>
using namespace std;
int main()
{
    int a[10],i,j,temp;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)/*����*/
    {
        for(j=i+1;j<10;j++)
        {
          if(a[i]>a[j])
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==1)
        cout<<a[i]<<endl;/*���������*/
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        cout<<a[i]<<endl;/*���ż��*/
    }
    return 0;
}





















