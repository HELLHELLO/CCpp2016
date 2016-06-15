#include "Rect.h"
#include <iostream>
Rect::Rect(int x,int y,int wight,int hight):Shape(x,y)
{
    this->hight=hight;
    this->wight=wight;
}

Rect::~Rect()
{
    //dtor
}

void Rect::show(){
    std::cout<<"x="<<x<<",y="<<y<<",wight="<<wight<<",hight="<<hight<<",area="<<wight*hight<<std::endl;
}
