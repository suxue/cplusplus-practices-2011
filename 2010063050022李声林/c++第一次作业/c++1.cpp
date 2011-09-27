#include<iostream>
using namespace std;
int main()
{
    int k=0;
    cout<<"100~200之间不能被3和7整除的数为："<<endl;
    for(int i=100;i<=200;i++)
    {
        if(i%3==0&&i%7==0);
        else
        {
           cout<<i;cout<<" ";
           k++;
        }
        if(k==10)
        {
            k=0;
            cout<<endl;
        }
    }
    return 0;
}

