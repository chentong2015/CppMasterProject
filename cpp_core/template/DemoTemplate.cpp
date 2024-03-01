#include <iostream>
#include <string>
#include "TemplateClass.h"

using namespace std;

// T泛型的特化类型必须能够执行"<"操作符运算
// 自定义的class类型必须为"<"运算符提供重载 !!
template <typename T>
T minimum(const T& lhs, const T& rhs) {
    return lhs < rhs ? lhs : rhs;
}

template <typename C>
void print(const string& s, const C& c) {
    cout << s;
    for (const auto& e : c) {
        cout << e << " ";
    }
    cout << endl;
}

// /std:c++17模式或更高版本中，编译器会推导使用auto声明的非类型模板参数的类型
template <auto x> constexpr auto constant = x;

int main() {
    // 使用时可以不必指出泛型的特化类型，自动根据参数类型进行推导
    int result = minimum(10, 20);
    int result1 = minimum<int>(10, 20);
    int result2 = minimum<float>(10.3, 20.5);
    cout << result + result1 + result2 << endl;

    ArgumentsClass<> argumentsClass1;
    ArgumentsClass<int> argumentsClass2;
    ArgumentsClass<int, double> argumentsClass3;
    MyArray<ArgumentsClass<>, 10> arr;

    // 自动推导auto泛型并设置成变量的值
    auto v1 = constant<5>;      // v1 == 5, decltype(v1) is int
    auto v2 = constant<true>;       // v2 == true, decltype(v2) is bool
    auto v3 = constant<'a'>;   // v3 == 'a', decltype(v3) is char
    return 0;
}