#include <iostream>

using namespace std;

// TODO. CPP类型系统
// - 推荐在声明变量时进行初始化
// - 推荐auto自动类型推导，同时必须提供初始数据 (C++ 11)
//
// Void类型：特殊类型
// - 不能声明void类型的变量，但可声明void *类型的变量(指向void的指针)
// - void常用来表示函数不返回值
// - void不能做为没有参数的函数的参数 function(void)
//
// const 类型限定符
// - const 确保在编译时不会无意中修改值，常用在函数和变量的声明中
// - const 类型与其非const不同，例如const int与int是不同的类型
//
// scope 作用域
int valueScope = 7;   // i has global scope, outside all blocks

int main() {
    int maxValue;                // Not recommended! maxValue contains garbage bits until init
    int result = 0;              // Declare and initialize an integer.
    double coefficient = 10.8;   // Declare and initialize a floating

    auto name = "LA"; // Declare a variable and let compiler deduce the type.
    // auto address;             // Error. Compiler cannot deduce a type without an init value.
    // age = 12;                 // Error. Variable declaration must specify a type or use auto!
    // result = "Kenny G.";      // Error. Can't assign text to an int.

    std::string str = "one";    // 使用标准库中定义好的类型
    string str1 = "zero";

    int valueScope = 5;           // block scope, hides valueScope at global scope
    cout << "Block-scoped:" << valueScope;     // 获取块作用域中的变量值
    cout << "Global-scoped: " << ::valueScope; // 使用范围解析运算符 (::) 访问全局范围名称

    return 0;
}


