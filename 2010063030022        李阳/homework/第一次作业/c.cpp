#include<iostream>
using namespace std;
int main()
{
    int n;int t1,t2,t3,t4;
    float s;/*定义路程*/
    cout<<"Enter two score:"<<endl;
    cin>>n>>s;
    switch(n/15)
    {
        case 1:
        cout<<"The price is 5"<<endl;
        break;
        case 2:
        cout<<"The price is 9"<<endl;
        break;
        case 3:
        cout<<"The price is 12"<<endl;
        case 4:
        t1=s/1000;
        t2=14+t1;
        cout<<"The price is"<<t2<<endl;
        break;
        case 5:
        t3=s/1000;
        t4=15+t3;
        cout<<"The price is"<<t4<<endl;
        break;

    }
    return 0;
}
