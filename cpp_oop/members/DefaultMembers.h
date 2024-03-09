#ifndef CPP_MASTER_DEFAULTDELETEFUNCTIONS_H
#define CPP_MASTER_DEFAULTDELETEFUNCTIONS_H

#include <iostream>

// TODO. 特殊的成员函数可以设置成default默认函数
// 可以默认设置任何特殊成员函数，以显式声明特殊成员函数使用默认实现

class SuperClass {
    std::string value;
    SuperClass() = default;

    // 使用默认的析构器的实现
    ~SuperClass() = default;
};

// 一旦声明了默认实现，则不能再对其自动义修改
// SuperClass::SuperClass() {
// }

class SubClass: public SuperClass {
    // 从基类派生的类无法自动生成它自己的默认构造函数
    // SubClass();
};

#endif //CPP_MASTER_DEFAULTDELETEFUNCTIONS_H
