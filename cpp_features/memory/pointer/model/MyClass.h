
#ifndef CPP_MASTER_MYCLASS_H
#define CPP_MASTER_MYCLASS_H

#include <iostream>
#include <utility>

class MyClass {
public:
    int num = 0;
    std::string name;

    MyClass(int num, std::string name) : num(num), name(std::move(name)) {}

    void setName(const std::string &name) {
        MyClass::name = name;
    }

    void print() const {
        std::cout << name << ":" << num << std::endl;
    }
};

#endif //CPP_MASTER_MYCLASS_H
