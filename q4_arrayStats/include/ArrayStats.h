#ifndef ARRAYSTATS_H
#define ARRAYSTATS_H

class ArrayStats
{
private:
    int len;
    int* arr;

public:
    ArrayStats(int* a, int l);
    ~ArrayStats();
    int getMax();
    int getMin();
    double getAverage();
};

#endif
