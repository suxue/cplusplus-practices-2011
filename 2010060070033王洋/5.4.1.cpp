#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i=0,j=0,alen=0,blen=0,temp,swap;
    int a[10],b[10];
    cout<<"请输入十个整数："<<endl;
    for(i=0;i<10;i++)
    {
        cin>>temp;
        if(temp%2==0)
        {
            b[alen]=temp;
            alen++;
        }      
        else
        {
            a[blen]=temp;
            blen++;
        }           
    }
    cout<<"输入结束，其中奇数有"<<alen<<"个，偶数有"<<blen<<"个"<<endl;
    for(i=1;i<alen;i++)
    {
        swap=0;
        for(j=0;j<alen-i;j++)
           if(a[j]>a[j+1])
           {
               temp=a[j+1];
               a[j+1]=a[j];
               a[j]=temp;
               swap=1;
           }
        if(swap==0)
            break;
    }
    for(i=1;i<blen;i++)
    {
        swap=0;
        for(j=0;j<blen-i;j++)
           if(b[j]>b[j+1])
           {
               temp=b[j+1];
               b[j+1]=b[j];
               b[j]=temp;
               swap=1;
           }
        if(swap==0)
            break;
    }
    cout<<"经过排序后："; 
    for(i=0;i<alen;i++)
        cout<<a[i]<<" ";
    for(i=0;i<blen;i++)
        cout<<b[i]<<" ";
    system("Pause");
}
