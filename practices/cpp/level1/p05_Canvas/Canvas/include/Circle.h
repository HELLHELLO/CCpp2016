#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle:public Shape
{
    public:
        Circle(int x,int y,int r);
        virtual void show();
        virtual ~Circle();
    protected:
    private:
        int r;
};

#endif // CIRCLE_H
