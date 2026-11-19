// src/main.cpp
#include "shared/Hello.h"   // 能这样写，全靠 CMakeLists 里那行 include_directories(include)

#include <iostream>

int main() {
    Hello h("CMake");
    std::cout << h.greeting() << std::endl;
    return 0;
}
