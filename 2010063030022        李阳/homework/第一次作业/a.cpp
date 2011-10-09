#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=100;i<=200;i++)
    {
        if(i%3!=0&&i%7!=0)
        j=i;
        cout<<"j="<<j<<endl;
        return 0;
    }
}
