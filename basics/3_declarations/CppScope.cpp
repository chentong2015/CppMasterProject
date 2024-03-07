#include <iostream>

using namespace std;

// global scope 全局作用域
// outside all blocks
int valueScope = 7;

int main() {
    int valueScope = 5;   // block scope hides global scope 块作用域会覆盖全局作用域
    cout << valueScope;   // 获取块作用域中的变量值
    cout << ::valueScope; // 使用范围解析运算符 (::) 访问全局范围名称

    return 0;
}


