#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"

class Circle
{
    public:
        Circle(int x,int y);
        Circle(Point center);
        void moveTo(int x,int y);
        void getPosition();
        virtual ~Circle();
    protected:
    private:
        Point centerPoint;
};

#endif // CIRCLE_H
