#ifndef CPP_MASTER_MYSTRUCT_H
#define CPP_MASTER_MYSTRUCT_H

#include <iostream>
#include <utility>

struct RGB {
    short r { 0 };  // member initialization
    short g { 0 };  // 直接初始化成员
    short b { 0 };
    int v   { 10};
};

struct MyStruct {
    std::string name;
    float amount;

    // 结构体和class相似的构造器
    MyStruct(std::string name, float amount) : name(std::move(name)), amount(amount) {}
};

#endif //CPP_MASTER_MYSTRUCT_H
