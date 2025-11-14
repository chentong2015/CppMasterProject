#include <iostream>

// TODO. CPP语言 函数的声明, 支持在类范围之外定义
// - 成员函数: 在类范围中定义的函数，封装在类中 ==> 面对对象的语言约束
// - 非成员函数(free函数): 在命名空间范围中定义，包括隐式全局命名空间 ==> C语言特征

// 函数声明的必需部分: 返回类型 + 函数名 + 参数列表
// 函数声明的可选部分: ...
void testConstParameter(const int value) {
    // const标记的参数保证不会被函数修改
    std::cout << value + 10;
}

// constexpr 常量表达式的声明
// 指示函数的返回值是常量值，可以在编译时进行计算
constexpr float exp(float x, int n) {
    return n == 0 ? 1 :
           n % 2 == 0 ? exp(x * x, n / 2) :
           exp(x * x, (n - 1) / 2) * x;
}

// Default Arguments
// 函数签名中的最后一个或几个参数可分配默认自变量, 调用方可能会在调用函数时省略自变量
int doSomething(int num, std::string str = "Working", float alloc = 10.0f) {
    std::cout << str;
    return 0;
}