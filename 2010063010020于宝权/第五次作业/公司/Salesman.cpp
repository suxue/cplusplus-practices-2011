#include <iostream>
#include "Employee.h"

using namespace std;

class Salesman :protected Employee{
public:
    Salesman(string name,int ID){
        this->name = name;
        this->ID = ID;
        monthSale = 0;
        tiCen = 0.04;
    }
    void setMonthSale(double mon){
        monthSale = mon;
    }
    double getPay(){
        return monthSale * tiCen;
    }
private:
        double monthSale;
        double tiCen ;
};
