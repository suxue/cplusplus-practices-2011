#include <iostream>
#include "Employee.h"
using namespace std;

class Manager :protected Employee{
public:
    Manager(string name,int ID){
        this->name = name;
        this->ID = ID;
        pay = 8000;
    }
    double getPay(){
        return pay;
    }
};
