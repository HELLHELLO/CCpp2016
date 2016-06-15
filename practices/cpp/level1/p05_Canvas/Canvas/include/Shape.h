#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
        Shape(int x,int y);
        virtual void show()=0;
        virtual ~Shape();
    protected:
        int x;
        int y;
    private:
};

#endif // SHAPE_H
