#include<iostream>
using namespace std;
int main()
{
    int i=0;
    cout<<"100~200֮�䲻�ܱ�3��7��������Ϊ��"<<endl;
    for(int j=100;j<=200;j++)
    {
        if(j%3==0&&j%7==0);
        else
        {
           cout<<j;cout<<" ";
           i++;
        }
        if(i==10)
        {
            i=0;
            cout<<endl;
        }
    }
    return 0;
}

