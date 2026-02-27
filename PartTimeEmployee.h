
#ifndef PARTTIMEEMPLOYEE_H_
#define PARTTIMEEMPLOYEE_H_

#include <string>
#include <iostream>
#include <algorithm>
#include "Employee.h"

using namespace std;


class PartTimeEmployee: public Employee{
    public:
    double hourlyRate;
    int hoursWorked;
    PartTimeEmployee();
    PartTimeEmployee(string n, double hr, int hw):Employee(n),hourlyRate(hr),hoursWorked(hw){}


    double calculateSalary()override{
        return hourlyRate*hoursWorked;
    }
};


#endif