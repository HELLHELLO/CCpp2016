#include "point.h"
#include <iostream>
point::point(int value):father(*this)
{
    this->value=value;
}

point::point(int value,point &f):father(f)
{
    this->value=value;
}

point::~point()
{
    //dtor
}

void point::append(point& son){
    sons.push_back(&son);
}

int point::sizeOfSons(){
    int sum=sons.size();
    for(int i=0;i<sons.size();i++){
        sum+=sons[i]->sizeOfSons();
    }
    return sum;
}

int point::showValue(){
    return value;
}

point& point::myFather(){
    return father;
}


