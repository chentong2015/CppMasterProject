#include <iostream>
#include "Monster.h"

// 构造器直接通过属性方法设置，或者通过this指针设置属性的值
Monster::Monster(): size(10) {
}

// TODO. 三种属性赋值的方式(前提是属性具有可访问性)
// 1. 直接调用属性初始化函数
// 2. 使用this指针访问属性并赋值
// 3. 使用类型访问属性并赋值
Monster::Monster(const std::string &name) : name(name) {
    this->name = name;
    Monster::name = name;
}

Monster::Monster(int size, int power, const std::string &name) : size(size), power(power), name(name) {
    std::cout << "Call monster constructor" << std::endl;
}

Monster::~Monster() = default;

int Monster::getSize() const {
    return size;
}

void Monster::setSize(int size) {
    Monster::size = size;
}

// 基于size属性的"=="比较器实现，属性在构造器中必须具有初始化值
bool Monster::operator==(const Monster &rhs) const {
    return size == rhs.size;
}

bool Monster::operator!=(const Monster &rhs) const {
    return !(rhs == *this);
}

std::ostream &operator<<(std::ostream &os, const Monster &monster) {
    os << "size: " << monster.size;
    return os;
}

const std::string &Monster::getName() const {
    return name;
}

// 修改名称时返回之前的旧值
std::string Monster::setName(const std::string &name) {
    auto previousName = Monster::name;
    Monster::name = name;
    return previousName;
}


