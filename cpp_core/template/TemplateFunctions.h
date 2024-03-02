#ifndef CPP_MASTER_TEMPLATEFUNCTIONS_H
#define CPP_MASTER_TEMPLATEFUNCTIONS_H

#include <iostream>

// T泛型的特化类型必须能够执行"<"操作符运算, class类型必须为"<"运算符提供重载 !!
template <typename T>
T minimum(const T& lhs, const T& rhs) {
    return lhs < rhs ? lhs : rhs;
}

// 关键字typename表示此参数是类型的占位符
template <typename C>
void print(const std::string& s, const C& c) {
    std::cout << s;
    for (const auto& e : c) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}

#endif //CPP_MASTER_TEMPLATEFUNCTIONS_H
