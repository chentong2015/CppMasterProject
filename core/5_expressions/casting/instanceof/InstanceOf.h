#ifndef CPP_MASTER_INSTANCEOF_H
#define CPP_MASTER_INSTANCEOF_H

#include <iostream>

// TODO. 如何判断一个对象是否是每个特定类型的实例 ？
// Check one object is an instance of some class type or not
// 使用dynamic_cast<>()进行动态转换来判断对象是否属于特定类型

template<typename Base, typename T>
inline bool instanceof(const T *ptr) {
    return dynamic_cast<const Base*>(ptr) != nullptr;
}

class Parent {
    virtual void foo() { std::cout << "Parent\n"; }
};

class Child : public Parent {
    void foo() override { std::cout << "Child\n"; }
};

class OtherClass {};

#endif //CPP_MASTER_INSTANCEOF_H
