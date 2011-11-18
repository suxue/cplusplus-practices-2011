#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string>
using std::string;

class Employee {
protected:
    int ID;
    string name;
    double pay;
public:
    virtual double getPay() = 0;
};


#endif // EMPLOYEE_H_INCLUDED
