#include "Point.h"
#include <iostream>
Point::Point(int x,int y)
{
    this->x=x;
    this->y=y;
}

Point::~Point()
{
    //dtor
}

void Point::getPosition(){
    std::cout<<"x:"<<x<<",y:"<<y<<std::endl;
}

void Point::moveTo(int xx,int yy){
    x=xx;
    y=yy;
}
