#include "Circle.h"
#include <iostream>
Circle::Circle(int x,int y):centerPoint(x,y)
{
    //ctor
}

Circle::Circle(Point center):centerPoint(center)
{
    //ctor
}


Circle::~Circle()
{
    //dtor
}

void Circle::moveTo(int x,int y){
    centerPoint.moveTo(x,y);
}

void Circle::getPosition(){
    std::cout<<"The center's position:"<<std::endl;
    centerPoint.getPosition();
}
