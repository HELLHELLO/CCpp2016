#include <iostream>
#include "Shapes.h"
using namespace std;

int main()
{
    Shapes *x[2];
    x[0]=new Circle(10);
    x[1]=new Rect(3,4);
    int s=0;
    for(int i=0;i<2;i++){
        s+=x[i]->area();
    }
    cout<<s;
    return 0;
}
