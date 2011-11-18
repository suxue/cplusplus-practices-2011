#include <iostream>
#include "Manager.cpp"
#include "Technician.cpp"
#include "Salesman.cpp"
#include "Salesmanager.cpp"
using namespace std;

int main()
{
    Manager man("man",1);
    cout<<man.getPay()<<endl;
    Technician tec("tec",2);
    tec.setWorkHout(100);
    cout<<tec.getPay()<<endl;

    Salesman sel("sel",3);
    sel.setMonthSale(100);
    cout<<sel.getPay()<<endl;

    Salesmanager salm("salm",4);
    salm.setMonthTotal(1000);
    cout<<salm.getPay()<<endl;
    return 0;
}
