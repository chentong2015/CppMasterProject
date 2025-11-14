#include <iostream>

int getValue() {
    return 42;
}

template<typename T>
auto show(T t) {
    // CPP17 if constexpr 语句在编译时计算
    // 编译器仅生成与发送到函数模板的参数类型匹配的 if 分支的代码
    if constexpr (std::is_pointer_v<T>) {
        return *t;
    } else {
        return t;
    }
}

int main() {
    // TODO. 带有初始值设定项的if语句, init条件+condition判断
    if (int x = getValue(); x == 42) {
        std::cout << "x is 42\n";
    }

    int a = 42;
    int* pB = &a;
    std::cout << show(a) << "\n"; // prints "42"
    std::cout << show(pB) << "\n"; // prints "42"
    
    return 0;
}
