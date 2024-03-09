#include <iostream>
#include "DemoClass.h"

// TODO. 三种属性赋值的方式(前提是属性具有可访问性)
// 1. 调用属性初始化函数进行赋值
// 2. 使用this指针访问属性并赋值
// 3. 使用类型访问属性并赋值
DemoClass::DemoClass(): size(10) {
}

DemoClass::DemoClass(const std::string &name) : name(name) {
    this->name = name;
    DemoClass::name = name;
}

DemoClass::DemoClass(int size, int power, const std::string &name) :
    size(size), power(power), name(name) {
    std::cout << "Call monster constructor" << std::endl;
}

int DemoClass::getSize() const {
    return size;
}

void DemoClass::setSize(int s) {
    DemoClass::size = s;
}

const std::string& DemoClass::getName() const {
    return name;
}

// 修改名称时返回之前的旧值
std::string DemoClass::setName(const std::string &n) {
    auto previousName = DemoClass::name;
    DemoClass::name = n;
    return previousName;
}

// 析构函数的实现: 可用于删除指针，释放heap堆分配的内存
DemoClass::~DemoClass() {
    std::cout << "Finish" << std::endl;
};




