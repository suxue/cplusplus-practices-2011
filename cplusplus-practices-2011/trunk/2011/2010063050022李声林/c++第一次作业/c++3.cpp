#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int sum=0;
    int n,m;
    cout<<"�����������n��"<<endl;
    cin>>n;
    cout<<"�����ʼľ���m��"<<endl;
    cin>>m;
    cout<<"�������������g����"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]<15)
        cout<<"error"<<endl;
        else if(a[i]<30)
        sum+=5;
        else if(a[i]<45)
        sum+=9;
        else if(a[i]<60)
        sum+=12;
        else if(a[i]<75)
        {
            sum+=14;
            if(m>=1000)
            sum+=m/1000;
        }
        else
        {
            sum+=15;
            if(m>=1000)
            sum+=m/1000;
        }
    }
    cout<<sum<<endl;
    return 0;
}
