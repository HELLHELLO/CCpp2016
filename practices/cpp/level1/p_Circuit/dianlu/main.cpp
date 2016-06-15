#include <iostream>
#include "Button.h"
using namespace std;

int main()
{
    Button button;
    Unit* x[2];
    int n;
    x[0]=new Fan;
    x[1]=new Door;
    cin>>n;
    while(n==1||n==2){
        button.bind(x[n-1]);
        button.on();
        button.off();
        cin>>n;
    }
    return 0;
}
