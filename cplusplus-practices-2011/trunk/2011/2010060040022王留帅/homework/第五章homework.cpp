#include <iostream>
#include<string.h>
using namespace std;
const int col=2;
enum dir{Asc,Des};
void sort(int a[][col],int n,int Cn,dir D)
{
    int t[col];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            if((a[i][Cn]<a[j][Cn]&&D==Des)||(a[i][Cn]>a[j][Cn]&&D==Asc))//Cn是要排序的列数
            {
			memcpy(t,a[i],sizeof(t));
            memcpy(a[i],a[j],sizeof(t));
            memcpy(a[j],t,sizeof(t));
            }
        }
        for(int i=0;i<n-1;i++)
        	for(int j=i+1;j<n;j++)
        	{
            	if(a[i][0]<1)
				if(a[i][1]>a[j][1])//Cn是要排序的列数
            	{
				memcpy(t,a[i],sizeof(t));
            	memcpy(a[i],a[j],sizeof(t));
            	memcpy(a[j],t,sizeof(t));
            	}
        	}
}

int main()
{
    int intenger[10][2];
    for(int i=0;i<10;i++)
        {
            cout<<"请输入第"<<i+1<<"个整数"<<endl;
            cin>>intenger[i][1];
            intenger[i][0]=intenger[i][1]%2;
        }
        sort(intenger,10,1,Asc);
        sort(intenger,10,0,Des);
        for( int k=0;k<10;k++)
        {
            cout<<intenger[k][1]<<"\t";
        }
    return 0;
}
