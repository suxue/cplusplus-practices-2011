#include <iostream>
using namespace std;
struct Employee{
    int number;
    char name;
    char workspace;
    double pay;
};
int main()
{
    int i;
    Employee s[100];
    for(i=0;i<100;i++)
    {
        switch(s[i].workspace)
        {
            case 'manager':
            s[i].pay=8000;
            cout<<"The pay of manager is"<<s[i].pay<<endl;
            break;
            case 'technician':
            int hour;
            cin>>hour;
            s[i].pay=100*hour;
            cout<<"The pay of technician is"<<s[i].pay<<endl;
            break;
            case 'salesman':
            int Sales;
            cin>>Sales;
            s[i].pay=Sales*0.04;
            cout<<"The pay of salesman is"<<s[i].pay<<endl;
            break;
            case 'salesmanager':
            int AllSales;
            cin>>AllSales;
            s[i].pay=5000+AllSales*0.005;
            cout<<"The pay of salesmanager is"<<s[i].pay<<endl;
            break;
        }





    }

}


