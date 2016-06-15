#include "Student.h"
#include <iostream>
Student::Student(int number,std::string mOrFm,std::string s):name(s),maleOrFemale(mOrFm)
{
    this->number=number;
    source=0;
}

Student::~Student()
{
    //dtor
}

void Student::value(int theValue){
    source=theValue;
}

void Student::show(){
    std::cout<<"StudentNumber:"<<number<<" Name:"<<name<<" Sex:"<<maleOrFemale<<" Source:"<<source<<std::endl;
}

int Student::studentNumber(){
    return number;
}

void Student::save(){
    std::cout<<number<<name<<" "<<source<<maleOrFemale;
}
