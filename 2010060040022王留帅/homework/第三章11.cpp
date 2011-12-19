#include <iostream>

using namespace std;

int main()
{
    int weight,distance,fee;
    cout<<"请输入包裹重量及距离："<<endl;
    cin>>weight>>distance;
    switch((weight-1)/15)
    {
        case 0:
        fee=5;
        break;
        case 1:
        fee=9;
        break;
        case 2:
        fee=12;
        break;
        case 3:
        fee=14+distance/1000;
        break;
        default:
        fee=15+distance/1000;
    }
    cout<<"fee="<<fee<<endl;
}
