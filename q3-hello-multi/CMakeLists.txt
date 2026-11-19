# ── 要求的最低 CMake 版本，Ubuntu 22.04 自带 3.22，写 3.16 一定满足 ──
cmake_minimum_required(VERSION 3.16)
# ── 项目名，只用 C++。定义后可以引用 ${PROJECT_NAME} ──
project(hello_multi LANGUAGES CXX)
# ── 按 C++17 编译 ──
set(CMAKE_CXX_STANDARD 17)
# ── 必须真的用 C++17，编译器不支持就报错，不允许悄悄降级 ──
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# ── 打开 -Wall -Wextra 警告，让越界、未初始化这类问题在编译期暴露 ──
add_compile_options(-Wall -Wextra)
# ── 关键：把 include/ 目录加进头文件的搜索路径 ──
#    ── 加了这一行，代码里才能写 #include "shared/Hello.h"
#    ── 不加就只能写相对路径 ../include/shared/Hello.h，很难看且一挪位置就崩
include_directories(include)
# ── 生成可执行文件，名字叫 hello_multi ──
add_executable(hello_multi
    # ── 第 1 个源文件：主函数在这里，是程序入口 ──
    src/main.cpp
    # ── 第 2 个源文件：Hello 类成员函数的实现 ──
    src/Hello.cpp
)
# ── 说明：Hello.h 不写在这里。头文件不是"被编译的源文件"， ──
#    ── 它是在 src/Hello.cpp 和 src/main.cpp 里被 #include 进去的 ──
