//
// Created by TONG CHEN on 20/02/2024.
//

#ifndef CPP_MASTER_MYSTRUCT_H
#define CPP_MASTER_MYSTRUCT_H

#include <iostream>
#include <utility>

using namespace std;

struct MyStruct {
    std::string name;
    float amount;

    // 结构体和class相似的构造器
    MyStruct(string name, float amount) : name(std::move(name)), amount(amount) {}
};

#endif //CPP_MASTER_MYSTRUCT_H
