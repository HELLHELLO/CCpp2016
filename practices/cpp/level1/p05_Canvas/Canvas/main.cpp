#include <iostream>
#include "Canvas.h"
#include "Shape.h"
#include "Rect.h"
#include "Circle.h"
using namespace std;

int main()
{
    int type=0;
    int x,y,wight,hight,r;
    Canvas canvas(1);
    while(1){
        cin>>type;
        switch(type){
            case 1:
                {
                    cin>>x>>y>>wight>>hight;
                    canvas.append(x,y,wight,hight);
                    break;
                }
            case 2:
                {
                    cin>>x>>y>>r;
                    canvas.append(x,y,r);
                    break;
                }
            case 3:
                canvas.draw();
                break;
            default:
                break;
        }
    }
    return 0;
}
