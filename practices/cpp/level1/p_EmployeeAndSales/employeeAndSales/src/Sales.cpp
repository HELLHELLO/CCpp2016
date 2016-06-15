#include "Sales.h"

Sales::Sales(Employee person,int sale):Employee(person)
{
    this->sale=sale;
}

Sales::~Sales()
{
    //dtor
}

int Sales::value(){
    return 1000*classes+0.2*sale;
}

