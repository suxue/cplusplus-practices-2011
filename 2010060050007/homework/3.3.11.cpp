#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    float i,j,k;
    cout<<"请输入重量和邮寄距离:";
    cin>>i>>j;
    if(i<=15)
    k=5;
    if(i>15&&1<=30)
    k=9;
    if(i>30&&i<=45)
    k=12;
    if(i>45&&i<=60)
    k=14+int(j/1000);
    if(i>=60)
    k=15+int(j/1000);
    cout<<"邮资是"<<k;
    system("pause");
    return 0;
}
    
