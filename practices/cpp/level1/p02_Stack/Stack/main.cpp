#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    int i,n;
    Stack<int> S(10);
    for(i=0;i<10;i++){
        cin>>n;
        S.push(n);
    }
    for(i=0;i<10;i++){
        cout<<S.pop()<<endl;
    }
    return 0;
}
