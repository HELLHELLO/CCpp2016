#ifndef STACK_H
#define STACK_H
#include <iostream>
template<class TYPE>
class Stack
{
    public:
        bool isEmpty();
        bool isFull();
        void push(TYPE item);
        TYPE pop();
        Stack(int theMax);
        virtual ~Stack();

    protected:

    private:
        TYPE* data;
        int top;
        int sizes;
};
template<class TYPE>
Stack<TYPE>::Stack(int theMax)
{
    data=new TYPE[theMax];
    top=0;
    sizes=theMax;
}
template<class TYPE>
Stack<TYPE>::~Stack()
{
    delete []data;
}
template<class TYPE>
void Stack<TYPE>::push(TYPE item){
    data[top]=item;
    top=top+1;
}
template<class TYPE>
TYPE Stack<TYPE>::pop(){
    top=top-1;
    return data[top+1];
}
template<class TYPE>
bool Stack<TYPE>::isEmpty(){
    return !(top);
}
template<class TYPE>
bool Stack<TYPE>::isFull(){
    return !(top-sizes);
}
#endif // STACK_H
;
