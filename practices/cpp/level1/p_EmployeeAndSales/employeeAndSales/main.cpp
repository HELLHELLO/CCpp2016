#include <iostream>
#include "Employee.h"
#include <string>
#include "Sales.h"
using namespace std;

int main()
{
    string name;
    int age;
    int classes;
    cin>>classes;
    cin>>age;
    cin>>name;
    Employee test(classes,name,age);
    cout<<test.value()<<endl;
    Sales person(test,1000);
    cout<<person.value();
    return 0;
}
