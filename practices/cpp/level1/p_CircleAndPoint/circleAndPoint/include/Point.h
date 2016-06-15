#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point(int x,int y);
        void getPosition();
        void moveTo(int xx,int yy);
        virtual ~Point();
    protected:
    private:
        int x;
        int y;
};

#endif // POINT_H
