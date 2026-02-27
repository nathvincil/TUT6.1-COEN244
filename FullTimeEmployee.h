#ifndef FULLTIMEEMPLOYEE_H_
#define FULLTIMEEMPLOYEE_H_

#include <string>
#include <iostream>
#include <algorithm>
#include "Employee.h"

using namespace std;

class FullTimeEmployee:public Employee{

    public:

        double monthSalary;

        FullTimeEmployee();
        FullTimeEmployee(string n, double m):Employee(n),monthSalary(m){}

        double calculateSalary() override{

            return monthSalary;
        }

};


#endif