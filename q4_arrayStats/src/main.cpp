#include "ArrayStats.h"
#include <iostream>
using namespace std;

int main()
{
    int data[5] = {3, 7, 1, 9, 5};
    ArrayStats s(data, 5);

    cout << "max: " << s.getMax() << endl;
    cout << "min: " << s.getMin() << endl;
    cout << "avg: " << s.getAverage() << endl;

    int empty[1] = {0};
    ArrayStats e(empty, 0);
    cout << "empty avg: " << e.getAverage() << endl;
    return 0;
}