# 声明本项目需要的最低 CMake 版本。低于这个版本 cmake 会直接报错退出，
# 不写这一行新版本 cmake 会警告"你的项目没有声明兼容性"。
# Ubuntu 22.04 自带 cmake 3.22，所以写 3.16 一定满足。
cmake_minimum_required(VERSION 3.16)

# 项目名 + 使用的语言。LANGUAGES CXX 表示只用 C++。
# 执行后 CMake 会自动定义变量 ${PROJECT_NAME} = hello_cmake，后面可以直接用。
project(hello_cmake LANGUAGES CXX)

# 要求编译器按 C++17 标准编译。C++11/14 也能过，17 写起来更省事。
set(CMAKE_CXX_STANDARD 17)

# 要求必须真的用 C++17：编译器不支持就报错，而不是悄悄降级到 C++98。
# 不写这行的后果是"代码在 A 机器能编、B 机器报一堆奇怪的错"。
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 打开常用警告。-Wall 是常规警告，-Wextra 是更细的。
# 作用：把"数组越界风险""变量未初始化"这类问题在编译阶段就喊出来。
add_compile_options(-Wall -Wextra)

# 核心一行：用 main.cpp 生成一个可执行文件，产物名叫 hello_cmake。
# 想加源文件就在括号里继续加，用空格或换行分隔，末尾不加逗号。
add_executable(hello_cmake main.cpp)
