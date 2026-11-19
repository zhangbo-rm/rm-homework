#include "ArrayStats.h"

ArrayStats::ArrayStats(int* a, int l)
{
    len = l;
    arr = new int[l];
    for(int i=0;i < len;i++)
    {
       arr[i] = a[i];
    }
}

ArrayStats::~ArrayStats()
{
    delete[] arr;
};

int ArrayStats::getMax()
{
    if(len==0)return 0;
    int max = arr[0];
    for(int i = 0;i < len ;i++)
    {
       if(arr[i]>max)
       max = arr[i];
    }
    return max;
}

int ArrayStats::getMin()
{
    if(len==0)return 0;
    int min  = arr[0];
    for(int i = 0;i < len;i++)
    {
        if(arr[i] < min)
        min = arr[i];
    }
    return min;
}
double ArrayStats::getAverage()
{
    if(len==0)return 0;
    int sum = 0;
    for(int i =0;i < len;i++)
    {
        sum += arr[i];
    }
    return (double)sum / len;
}

