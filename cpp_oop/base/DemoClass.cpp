#include <iostream>
#include "DemoClass.h"

// TODO. 三种属性赋值的方式(前提是属性具有可访问性)
// 1. 通过()或者{}直接对属性进行初始化
// 2. 通过this指针访问属性
// 3. 直接赋值或者通过类型访问属性
DemoClass::DemoClass(const std::string &n) : name(n) {
    // 在构造函数中对成员赋值，将会修改成员声明时的初始值
    this->name = n;
    name = n;
    DemoClass::name = n;
}

DemoClass::DemoClass(int size, int power, const std::string &name) :
    size(size), power{power}, name(name) {
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