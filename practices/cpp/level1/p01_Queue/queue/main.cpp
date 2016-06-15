#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    Queue<int>::iterator it;
    Queue<int> test(10);
    test.append(10);
    test.append(11);
    test.append(12);
    test.append(13);
    test.append(14);
    test.append(15);
    test.append(16);
    test.append(17);
    test.append(18);
    test.append(19);
    it=test.first();
    cout<<it[3]<<endl;
    Queue<int>::iterator itit=++it;
    cout<<itit[0]<<endl;
}
