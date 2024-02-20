#include <iostream>

// C样式编程：
// 可以通过使用函数指针将函数传递到另一个函数，但不便于维护和理解
//
// C++ 11+ 新式lambda表达式:
// - 指向函数的指针使函数能够传递给其他函数, 类似于C风格编程中的“回调”
// - Lambda通常用于封装传递给算法或异步函数的少量代码行

void absSort(float* x, unsigned n) {
    std::sort(x, x + n,[](float a, float b) {
        return (std::abs(a) < std::abs(b));
    });
}

// Capture 子句: 访问或“捕获”周边范围内的变量

