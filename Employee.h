#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


class Employee{

  

    public:
        Employee();
        Employee(string e): name(e){}
    virtual double calculateSalary()=0;

    virtual string display(){

       return name;
    }

    protected:

    string name;





};









#endif