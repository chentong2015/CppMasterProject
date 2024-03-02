#include <iostream>

namespace A {
    void f(int) {
        std::cout << "A::f(int) \n";
    }
}

// using 声明定义的名称是其原始名称的别名, 它不影响原始声明的类型、链接或属性
using A::f;   // f is a synonym for A::f(int) only

namespace A {
    void f(char) {
        std::cout << "A::f(char) \n";
    }
}

void f() {
    f('a');  // refers to A::f(int), even though A::f(char) exists
}

void b() {
    // 等效于同时引入了两个函数的声明(重载函数)
    using A::f; // refers to A::f(int) AND A::f(char)
    f(1);       // calls A::f(int);
    f('a');     // calls A::f(char);
}

int main() {
    b();
    return 0;
}