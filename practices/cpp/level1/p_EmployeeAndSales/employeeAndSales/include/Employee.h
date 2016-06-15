#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee
{
    public:
        Employee(int classes,std::string names,int age);
        virtual int value();
        virtual ~Employee();
    private:
    protected:
        int classes;
        std::string name;
        int age;
};

#endif // EMPLOYEE_H
