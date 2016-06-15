#include <iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;

int main()
{
    Point test(12,12);
    test.getPosition();
    Circle tested(test);
    tested.getPosition();
    tested.moveTo(20,20);
    tested.getPosition();
    return 0;
}
