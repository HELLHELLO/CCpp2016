#ifndef POINT_H
#define POINT_H
#include <vector>

class point
{
    public:
        point(int value,point &f);
        point(int value);
        void append(point &son);
        int sizeOfSons();
        int showValue();
        point& myFather();
        virtual ~point();
    protected:
    private:
        std::vector<point*> sons;
        int value;
        point &father;
};

#endif // POINT_H
