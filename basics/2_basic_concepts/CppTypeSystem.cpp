#include <iostream>

using namespace std;

// global scope 全局作用域
int valueScope = 7;   // i has global scope, outside all blocks

int main() {
    // 推荐设置变量的初始化值
    int maxValue;     // Not recommended! maxValue contains garbage bits until init
    int result = 0;              // Declare and initialize an integer.
    double coefficient = 10.8;   // Declare and initialize a floating

    // TODO. 推荐使用auto类型推导，避免类型名称重复
    // 必须提供初始化的数据才能由编译器进行推导(C++ 11)
    auto name = "LA"; // Declare a variable and let compiler deduce the type.
    // auto address;             // Error. Compiler cannot deduce a type without an init value.
    // age = 12;                 // Error. Variable declaration must specify a type or use auto!
    // result = "Kenny G.";      // Error. Can't assign text to an int.

    std::string str = "one";     // 使用标准库中定义好的类型
    string str1 = "zero";

    int valueScope = 5;           // block scope hides global scope 块作用域会覆盖全局作用域
    cout << "Block-scoped:" << valueScope;     // 获取块作用域中的变量值
    cout << "Global-scoped: " << ::valueScope; // 使用范围解析运算符 (::) 访问全局范围名称
    return 0;
}


