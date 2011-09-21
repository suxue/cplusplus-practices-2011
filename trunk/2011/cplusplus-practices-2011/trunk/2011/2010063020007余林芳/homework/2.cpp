#include <iostream>
using namespace std;
int main()
{
    int a[101],i;
    for(i=0;i<=100;i++)
    {
        a[i]=100+i;
        if(a[i]%3!=0&&a[i]%7!=0)
        cout<<a[i]<<"\n";
     }
     return 0;
}