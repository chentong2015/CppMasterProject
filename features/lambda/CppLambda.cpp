#include <iostream>
#include <algorithm>

// C++ 11+新式lambda表达式:
// - 指向函数的指针使函数能够传递给其他函数, 类似于C风格编程中的“回调”
// - Lambda通常用于封装传递给算法或异步函数的少量代码行
void absSort(float* x, unsigned n) {
    std::sort(x, x + n,[](float a, float b) {
        return (std::abs(a) < std::abs(b));
    });
}

// Capture 子句: 访问或“捕获”周边范围内的变量
void testCapture() {
    std::string str{ "if" };
    if (auto keywords = { "if", "for", "while" };
        std::any_of(keywords.begin(), keywords.end(),
                    // 捕获外部的str遍历，用于在list遍历时进行比较
                    [&str](const char* kw) { return kw == str; })) {
        std::cout << "Error! Token must not be a keyword\n";
    }
}



