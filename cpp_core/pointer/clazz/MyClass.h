
#ifndef CPP_MASTER_MYCLASS_H
#define CPP_MASTER_MYCLASS_H

#include <iostream>
#include <utility>

class MyClass {
public:
    int num;
    std::string name;

    MyClass() = default;
    MyClass(int num, std::string name) : num(num), name(std::move(name)) {}

    void setName(const std::string& n) {
        this->name = n;
    }

    void print() const {
        std::cout << name << std::endl;
    }
};

#endif //CPP_MASTER_MYCLASS_H
