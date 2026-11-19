// src/Hello.cpp
#include "shared/Hello.h"

Hello::Hello(std::string name) : name_(std::move(name)) {}

std::string Hello::greeting() const {
    return "Hello, " + name_ + "!（来自 include/shared/Hello.h）";
}
