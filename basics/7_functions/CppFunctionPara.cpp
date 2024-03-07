#include <iostream>

// TODO. 函数的形参(parameters)和实参(arguments)
// - 形参是在函数声明时所定义的参数，函数模板可以指定更多类型或值参数
// - 实参是函数在被调用时所传递的实际参数(其类型与形参列表兼容的具体值)

// TODO. 函数的调用
//  函数传参数的两种方式：by value 传值 | by reference 传地址/引用
//  函数传递引用的两种类型：lvalue-reference ｜ rvalue-reference 只能放在赋值号右边

// 默认情况参数通过值传递给函数，函数会收到所传递的对象的副本，副本的创建会影响性能
void testByValue(std::string input){
    input = "new test 1";
}

// 通过向参数添加'&'引用限定符，使自变量通过引用进行传递
// 当函数修改通过引用传递的参数时，它会修改原始对象，而不是本地副本
void testByLeftValueRef(std::string& input){
    input = "new test 2";
}

// 防止函数修改这类实参，请将形参限定为const&
void testByLeftValueRefConst(const std::string& input){
    std::cout << "test";
}

// C++ 显式处理通过右值引用进行传递
void testByRightValueRef(const std::string&& input){
    std::cout << input;
}

int main() {
    std::string input {"value"};
    std::cout << input << std::endl;

    testByValue(input);
    std::cout << input << std::endl;

    testByLeftValueRef(input);
    std::cout << input << std::endl;

    // 传递右值引用，使用在赋值号的右侧
    testByRightValueRef("test");
}