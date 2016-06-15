#include "Canvas.h"
#include <iostream>
Canvas::Canvas(int number)
{
    this->number=number;

}

Canvas::~Canvas()
{
    //dtor
}
void Canvas::append(int x,int y,int r){
    Circle* p=new Circle(x,y,r);
    objects.push_back(p);
}

void Canvas::append(int x,int y,int wight,int hight){
    Rect* p=new Rect(x,y,wight,hight);
    objects.push_back(p);
}

void Canvas::draw(){
    for(int i=0;i<objects.size();i++){
        objects[i]->show();
    }
}
