#ifndef RECT_H
#define RECT_H
#include "Shape.h"

class Rect:public Shape
{
    public:
        Rect(int x,int y,int wight,int hight);
        virtual void show();
        virtual ~Rect();
    protected:
    private:
        int wight;
        int hight;
};

#endif // RECT_H
