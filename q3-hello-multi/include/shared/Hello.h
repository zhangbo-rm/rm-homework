// include/shared/Hello.h
// 这个位置决定了代码里必须写 #include "shared/Hello.h"
#pragma once

#include <string>

class Hello {
public:
    // explicit 防止 "Hello h = "abc";" 这种隐式转换，是个好习惯
    explicit Hello(std::string name);

    // 返回一句问候语。const 表示这个函数不修改对象自己的成员
    std::string greeting() const;

private:
    std::string name_;
};
