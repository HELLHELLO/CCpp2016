#include "Button.h"
#include <iostream>
Button::Button()
{

}

Button::~Button()
{
    //dtor
}

void Button::bind(Unit* x){
    target=x;
}

void Button::on(){
    target->on();
}

void Button::off(){
    target->off();
}

void Fan::on(){
     std::cout<<"Fan open"<<std::endl;
     flag=1;
}

void Fan::off(){
     std::cout<<"Fan close"<<std::endl;
     flag=0;
}

void Door::off(){
     std::cout<<"Door close"<<std::endl;
     flag=0;
}

void Door::on(){
     std::cout<<"Door open"<<std::endl;
     flag=1;
}

Door::Door(){

}

Door::~Door()
{

}

Fan::Fan(){

}

Fan::~Fan(){

}

Unit::Unit(){

}

Unit::~Unit(){

}
