#include<iostream>
#include "Employee.h"
using namespace std;

class Salesmanager :protected Employee{
public:
    Salesmanager(string name,int ID){
        this->name = name;
        this->ID = ID;
        monthTotal = 0;
        guDing = 5000;
        tiCen = 0.005;
    }
    void setMonthTotal(double smt){
        monthTotal = smt;
    }
    double getPay(){
        return monthTotal*tiCen + guDing;
    }
private:

        double monthTotal;
        double guDing ;
        double tiCen;
};
