#include<iostream>
using namespace std;
int main()
{
    cout<<"正向输出26个英文字母："<<endl;
    char az='A';
    while(az<='Z')
    {
        cout<<az;
        az++;
    }
    cout<<endl;
    cout<<"逆向输出26个英文字母："<<endl;
    char za='Z';
    while(za>='A')
    {
        cout<<za;
        za--;
    }
    cout<<endl;
    return 0;
}

