#include <iostream>

// 模版函数的声明，在函数被调用时特化参数类型
// C++14 auto 返回类型中的类型推导
template<typename L, typename R>
auto add2(const L& lhs, const R& rhs) {
    return lhs + rhs;
}

// auto 不会保留它推导的类型的常量性
// decltype(auto) 使用decltype类型推断规则并保留所有类型信息
template<typename F, typename T>
decltype(auto) apply_(F&& f, T&& args) {
    return f + args;
}
