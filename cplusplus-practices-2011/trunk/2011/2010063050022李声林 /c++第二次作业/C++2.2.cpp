#include<iostream>
#include<string.h>
using namespace std;
int huiwen(char *p,int len)
{
    int i,flag;
    flag=0;
    for(i=0;i<=(len-1)/2;i++)
    {
        if(p[i]!=p[len-1-i])
        {
            flag=1;break;
        }
    }
    return flag;
}
int main()
{
    char a[100];
    int t,len;
    cin>>a;
    len=strlen(a);
    t=huiwen(a,len);
    if(t==0)
    cout<<a<<"�ǻ��ġ�"<<endl;
    else
    cout<<a<<"���ǻ��ġ�"<<endl;
    return 0;
}
