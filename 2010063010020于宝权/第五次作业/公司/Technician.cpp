#include<iostream>
#include "Employee.h"
using namespace std;

class Technician :protected Employee{
public:
    Technician(string name,int ID){
        this->name = name;
        this->ID = ID;
        h_pay = 100;
    }
    void setWorkHout(double wkh){
        workHour = wkh;
    }
    double getPay(){
        return h_pay * workHour;
    }
private:
        double h_pay;
        int workHour;
};
