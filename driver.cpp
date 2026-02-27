#include <string>
#include <iostream>
#include <algorithm>

#include "Employee.h"
#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"

using namespace std;

int main(){


Employee * e1 = new FullTimeEmployee("carlos",5000.0);
Employee * e2 = new PartTimeEmployee("Mario",16.75,35);

cout<<e1->calculateSalary()<<endl; //goes into derived employee fullTime to find its calculate salary
cout<<e2->calculateSalary()<<endl; //goes into derived employee parttine to find its calclated salary 
cout<<e1->display()<<endl; //goes into derived employee fullTime to find its display doesnt find it, uses the base one
cout<<e2->display()<<endl; //goes into derived employee parttine to find its display doesnt find it, uses the base one 






}