#ifndef CANVAS_H
#define CANVAS_H
#include "Circle.h"
#include "Shape.h"
#include "Rect.h"
#include <vector>
class Canvas
{
    public:
        Canvas(int number);
        void draw();
        void append(int x,int y,int r);
        void append(int x,int y,int wight,int hight);
        virtual ~Canvas();
    protected:
    private:
        std::vector<Shape*> objects;
        int number;
};

#endif // CANVAS_H
