#include "Circle.h"
#include <iostream>
Circle::Circle(int x,int y,int r):Shape(x,y)
{
    this->r=r;
}

Circle::~Circle()
{
    //dtor
}

void Circle::show(){
    std::cout<<"x="<<x<<",y="<<y<<",r="<<r<<",area="<<3.14*r*r<<std::endl;
}
