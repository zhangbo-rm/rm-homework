#include "ops.h"

// 升序：a 应该排在 b 前面时返回 true
bool ascend(int a, int b)
{
    return a < b;
}

// 降序：a 应该排在 b 前面时返回 true
bool descend(int a, int b)
{
    return a > b;
}

// 冒泡排序，比较规则由函数指针 compare 决定
void sortArray(int* arr, int len, bool (*compare)(int, int))
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            // 注意传参顺序：(后一个, 前一个)
            if (compare(arr[j + 1], arr[j]))
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
