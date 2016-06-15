#ifndef QUEUE_H
#define QUEUE_H
#define MAX 100
#include <iostream>
template <class TYPE>
class Queue
{
    public:
        Queue(int theMax);
        class iterator{
            public:
                TYPE* p;
                int &operator [](int i){
                     return *(p+i);
                };
                //void operator =(int* it){
               //      p=it;
                //};
                void operator =(iterator it){
                     p=it.p;
                };
                bool operator ==(iterator it){
                     if(p==it.p){
                        return 1;
                     }else{
                        return 0;
                     }
                };
                bool operator !=(iterator it){
                     if(p!=it.p){
                        return 1;
                     }else{
                        return 0;
                     }
                };
                bool operator <(iterator it){
                     if(p<it.p){
                        return 1;
                     }else{
                        return 0;
                     }
                }
                bool operator >(iterator it){
                     if(p>it.p){
                        return 1;
                     }else{
                        return 0;
                     }
                }
                iterator operator ++(){
                    iterator it;
                    p=p+1;
                    it.p=p;
                    return it;
                }
                iterator operator ++(int){
                    iterator it;
                    it.p=p;
                    p=p+1;
                    return it;
                }
                iterator operator +(int i){
                    iterator it;
                    //int* pp;
                    //pp=p+i;
                   // it=pp;
                    it.p=p+i;
                    return it;
                }
                iterator operator -(int i){
                    iterator it;
                    //int* pp;
                   // pp=p-i;
                    it.p=p-i;
                    return it;
                }
                iterator(){};
                ~iterator(){};
        };
        iterator first(){
            iterator a;
            a.p=&data[head];
            return a;
        };
        iterator last(){
            iterator a;
            a.p=&data[tail];
            return a;
        };
        virtual ~Queue();
        void append(TYPE item);
        TYPE pop();
        bool isEmpty();
        bool isFull();

    protected:

    private:
        TYPE* data;
        TYPE head=0;
        TYPE tail=0;
};
template <class TYPE>
Queue<TYPE>::Queue(int theMax){
    data=new TYPE[theMax];
    head=0;
    tail=0;
}
template <class TYPE>
Queue<TYPE>::~Queue(){
    delete []data;
}
template <class TYPE>
void Queue<TYPE>::append(TYPE item)
{
    data[tail]=item;
    tail=(tail+1)%MAX;
}
template <class TYPE>
TYPE Queue<TYPE>::pop()
{
    head=(head+1)%MAX;
    return data[(head+MAX-1)%MAX];
}
template <class TYPE>
bool Queue<TYPE>::isEmpty()
{
    return (head==tail);
}
template <class TYPE>
bool Queue<TYPE>::isFull()
{
    return ((head+1)%MAX==tail);
}

#endif // QUEUE_H
