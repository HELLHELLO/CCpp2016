#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    point root(1);
    point r1s(1,root);
    root.append(r1s);
    point r2s(2,root);
    root.append(r2s);
    point ss(3,r1s);
    r1s.append(ss);
    cout<<root.sizeOfSons();
    return 0;
}
