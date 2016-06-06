#include "Shapes.h"

Shapes::Shapes()
{
    //ctor
}

Shapes::~Shapes()
{
    //dtor
}

Circle::Circle(int r){
    this->r=r;
}

int Circle::area(){
    return (int)(3.14*r*r);
}

Rect::Rect(int x,int y){
    this->x=x;
    this->y=y;
}

int Rect::area(){
    return x*y;
}

Rect::~Rect()
{

}

Circle::~Circle(){

}

int Shapes::area(){
    return 0;
}
