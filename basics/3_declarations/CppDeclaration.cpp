#include <iostream>

// TODO. 使用前必须先声明，预先定义在前面
// C++ 中声明名称的位置就是它对编译器可见的位置
// 无法引用稍后在编译单元中某个位置声明的函数或类

int test(int i); // forward declaration

int main() {
    const double pi = 3.14; // OK. use build-in types

    int i = test(2);      // OK. test() is forward-declared

    // AfterClass obj;      // error! C not yet declared.

    std::string str;        // OK std::string is declared in <string> header
}

class AfterClass {
    // 在前面的main()方法中不可见
};