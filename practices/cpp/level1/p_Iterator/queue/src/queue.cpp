#include "Queue.h"
#include <iostream>
Queue::Queue(int theMax){
    data=new int[theMax];
    head=0;
    tail=0;
}

Queue::~Queue(){
    delete []data;
}

void Queue::append(int item)
{
    data[tail]=item;
    tail=(tail+1)%MAX;
}

int Queue::pop()
{
    head=(head+1)%MAX;
    return data[(head+MAX-1)%MAX];
}

bool Queue::isEmpty()
{
    return (head==tail);
}

bool Queue::isFull()
{
    return ((head+1)%MAX==tail);
}



