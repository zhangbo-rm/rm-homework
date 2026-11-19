#include "ops.h"
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100];
    if (n > 100) n = 100;          // 防止越界写
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mode;
    cin >> mode;

    // 声明一个函数指针，指向「吃两个 int、吐一个 bool」的函数
    bool (*cmp)(int, int);
    if (mode == 1)
        cmp = ascend;              // 函数名自动退化成地址
    else
        cmp = descend;

    sortArray(arr, n, cmp);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
