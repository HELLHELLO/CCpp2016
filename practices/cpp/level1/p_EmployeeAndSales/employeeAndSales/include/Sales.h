#ifndef SALES_H
#define SALES_H
#include "Employee.h"

class Sales:public Employee
{
    public:
        Sales(Employee person,int sale);
        int value();
        virtual ~Sales();
    protected:
    private:
        int sale;
};


#endif // SALES_H
