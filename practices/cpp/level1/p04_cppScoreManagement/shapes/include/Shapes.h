#ifndef SHAPES_H
#define SHAPES_H
#include <iostream>

class Shapes
{
    public:
        Shapes();
        virtual ~Shapes();
        virtual int area();
    protected:

    private:
};

class Circle:public Shapes
{
    public:
        int area();
        Circle(int r);
        virtual ~Circle();
    private:
        int r;
};

class Rect:public Shapes
{
    public:
        int area();
        Rect(int x,int y);
        virtual ~Rect();
    private:
        int x;
        int y;
};

#endif // SHAPES_H
