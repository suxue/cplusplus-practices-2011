#include <iostream>
using namespace std;

int main()
{
    int a[10],b[10]={0},c[10]={0},temp,i,j,k=0,l=0;
    cout<<"请输入要排序的数字";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==1)
        {
            b[k]=a[i];
            k++;
        }
        else
        {
            c[l]=a[i];
            l++;
        }
    }
    for(i=0;i<10;i++)
    {
        if(b[i]==0)
		break;
        else a[i]=b[i];
    }
    j=i;
    for(i=0;i<10;i++)
    {
        if(c[i]==0)
		break;
        else a[i+j]=c[i];
    }
    cout<<"the result :"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
