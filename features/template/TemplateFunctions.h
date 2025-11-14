#ifndef CPP_MASTER_TEMPLATEFUNCTIONS_H
#define CPP_MASTER_TEMPLATEFUNCTIONS_H

#include <iostream>

// T泛型的特化类型必须能够执行"<"操作符运算
// class自定义的类型必须为"<"运算符提供重载
template <typename T>
T minimum(const T& lhs, const T& rhs) {
    return lhs < rhs ? lhs : rhs;
}

#endif //CPP_MASTER_TEMPLATEFUNCTIONS_H
