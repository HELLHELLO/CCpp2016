#include "StudentList.h"
#include <iostream>
StudentList::StudentList()
{
    //ctor
}

StudentList::~StudentList()
{
    //dtor
}

void StudentList::append(int number,std::string maleOrFemale,std::string name){
    Student person(number,maleOrFemale,name);
    students.push_back(person);
}

void StudentList::out(int number){
    bool searching=0;
    for(int i=0;i<students.size();i++){
        if(students[i].studentNumber()==number){
            std::vector<Student>::iterator it=students.begin()+i;
            students.erase(it);
            std::vector<Student>().swap(students);
            searching=1;
            break;
        }
    }
    if(searching==0){
        std::cout<<"Failed to search this student"<<std::endl;
    }
}

void StudentList::inputValue(int number,int source){
    bool searching=0;
    for(int i=0;i<students.size();i++){
        if(students[i].studentNumber()==number){
            students[i].value(source);
            searching=1;
            break;
        }
    }
    if(searching==0){
        std::cout<<"Failed to search this student"<<std::endl;
    }
}

void StudentList::show(){
    for(int i=0;i<students.size();i++){
        students[i].show();
    }
}

void StudentList::save(){
    for(int i=0;i<students.size();i++){
        students[i].save();
    }
}
