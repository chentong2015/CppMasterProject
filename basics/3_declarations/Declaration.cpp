#include <iostream>

// TODO. 使用前必须先声明，预先定义在前面
// C++ 中声明名称的位置就是它对编译器可见的位置
// 无法引用稍后在编译单元中某个位置声明的函数或类

// Forward declaration 提前声明，在后面的所有代码中可见
int test(int i);

int main() {
    const double pi = 3.14; // OK. use build-in types
    int i = test(2);      // OK. test() is forward-declared
    // AfterClass obj;      // error! C not yet declared.
    std::string str;        // OK std::string is declared in <string> header
}

// AfterClass对前面的main()方法不可见
class AfterClass {
    void testAfter() {
        testBefore();
        std::cout << "after \n";
    }

    // TODO. 封装在类型中的方法，后声明的方法对前面的方法可见
    void testBefore() {
        std::cout << "before \n";
    }
};