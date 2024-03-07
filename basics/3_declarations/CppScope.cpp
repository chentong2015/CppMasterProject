#include <iostream>

using namespace std;

// global scope 全局作用域, outside all blocks
int valueScope = 7;

int main() {
    int maxValue; // Not recommended! maxValue contains garbage bits until init

    // 推荐设置变量的初始化值
    int result = 0;              // Declare and initialize an integer.
    double coefficient = 10.8;   // Declare and initialize a floating



    std::string str = "one";     // 使用标准库中定义好的类型

    int valueScope = 5;          // block scope hides global scope 块作用域会覆盖全局作用域
    cout << valueScope;          // 获取块作用域中的变量值
    cout << ::valueScope;        // 使用范围解析运算符 (::) 访问全局范围名称
    return 0;
}


