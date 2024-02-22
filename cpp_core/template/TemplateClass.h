#ifndef CPP_MASTER_TEMPLATECLASS_H
#define CPP_MASTER_TEMPLATECLASS_H

#include <iostream>

// 类型参数的数量没有实际限制, 以逗号分隔
template <class T, class U, class V>
class MyClass {
};

template <typename T, typename U, typename V>
class TemplateClass {
public:
    T username;
    U city;
    V value;
};

// 省略号运算符(...)表示零个或多个类型参数的模板
template<typename... Arguments>
class ArgumentsClass {
};

// C++ 模板支持非类型参数，也称为值参数
// 可以提供常量整型值来指定数组的长度
template<typename T, size_t L>
class MyArray {
    T arr[L];
public:
    MyArray() {
    }
};

#endif //CPP_MASTER_TEMPLATECLASS_H
