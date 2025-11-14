#include <iostream>
#include "TemplateClass.h"
#include "TemplateFunctions.h"

// /std:c++17模式或更高版本中，编译器会推导使用auto声明的非类型模板参数的类型
template <auto x> constexpr auto constant = x;

int mainTest() {
    // 自动推导auto泛型并设置成变量的值
    auto v1 = constant<5>;      // v1 == 5, decltype(v1) is int
    auto v2 = constant<true>;       // v2 == true, decltype(v2) is bool
    auto v3 = constant<'a'>;   // v3 == 'a', decltype(v3) is char

    // 使用时可以不必指出泛型的特化类型，自动根据参数类型进行推导
    int result = minimum(10, 20);
    int result1 = minimum<int>(10, 20);
    int result2 = minimum<float>(10.3, 20.5);
    std::cout << result + result1 + result2 << std::endl;

    ArgumentsClass<> argumentsClass1;
    ArgumentsClass<int> argumentsClass2;
    ArgumentsClass<int, double> argumentsClass3;
    
    // MyArray<ArgumentsClass<>, 10> arr;
    
    return 0;
}