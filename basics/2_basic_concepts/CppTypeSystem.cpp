#include <iostream>

using namespace std;

// CPP类型系统
// - 推荐在声明变量时进行初始化
// - 推荐auto自动类型推导，同时必须提供初始数据 (C++ 11)

// Void类型：特殊类型
// - 不能声明void类型的变量，但可声明void *类型的变量(指向void的指针)
// - void常用来表示函数不返回值
// - void不能做为没有参数的函数的参数 function(void)

// const 类型限定符
// - const 限定符在函数和变量声明中使用广泛
// - const 确保在编译时不会无意中修改值
// - const 类型与其非const不同；例如const int与int是不同的类型
int main() {
    int maxValue;                // Not recommended! maxValue contains garbage bits until it's initialized.
    int result = 0;              // Declare and initialize an integer.
    double coefficient = 10.8;   // Declare and initialize a floating

    auto name = "LA"; // Declare a variable and let compiler deduce the type.
    // auto address;             // error. Compiler cannot deduce a type without an init value.
    // age = 12;                 // error. Variable declaration must specify a type or use auto!
    // result = "Kenny G.";      // error. Can't assign text to an int.

    std::string str = "one"s;    //
    string str1 = "zero";

    return 0;
}


