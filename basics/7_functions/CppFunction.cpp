#include <iostream>

// TODO. CPP语言 函数的声明, 支持在类范围之外定义
// - 成员函数: 在类范围中定义的函数，封装在类中 ==> 面对对象的语言约束
// - 非成员函数(free函数): 在命名空间范围中定义，包括隐式全局命名空间 ==> C语言特征
//
// TODO. CPP语言 函数的重载overloading
// 函数可能会重载，它们可能会共享相同的名称，但在形参的数量和/或类型上有所不同

// 函数声明的必需部分: 返回类型 + 函数名 + 参数列表
// 函数声明的可选部分:
//   1. constexpr 指示函数的返回值是常量值，可以在编译时进行计算
//   2. extern或static 其链接规范
//   3. inline 指示编译器将对函数的每个调用替换为"函数代码"本身
//      在某个函数快速执行并且在性能关键代码段中重复调用的情况下，内联可以帮助提高性能
//   4. noexcept 表达式，指定函数是否可以引发异常
//   5. 特殊的类型成员函数
void testConstParameter(const int value) {
    // const标记的参数保证不会被函数修改
    std::cout << value + 10;
}

constexpr float exp(float x, int n) {
    return n == 0 ? 1 :
           n % 2 == 0 ? exp(x * x, n / 2) :
           exp(x * x, (n - 1) / 2) * x;
}

inline int testInline() {
   return 10 + 10;
}

// 模版函数的声明，在函数被调用时特化参数类型
template<typename L, typename R>
auto add2(const L& lhs, const R& rhs) {
    return lhs + rhs;
}
