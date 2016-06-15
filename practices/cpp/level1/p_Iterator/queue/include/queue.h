#ifndef QUEUE_H
#define QUEUE_H
#define MAX 100
#include <iostream>
class Queue
{
    public:
        Queue(int theMax);
        class iterator{
            public:
                int* p;
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
        void append(int item);
        int pop();
        bool isEmpty();
        bool isFull();

    protected:

    private:
        int* data;
        int head=0;
        int tail=0;
};


#endif // QUEUE_H
