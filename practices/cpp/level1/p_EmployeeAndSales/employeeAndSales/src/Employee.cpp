#include "Employee.h"

Employee::Employee(int classes,std::string names,int age):name(names)
{
    this->classes=classes;
    this->age=age;
}

Employee::~Employee()
{
    //dtor
}

int Employee::value(){
    return 1000*classes;
}
