// C++ 标准属性
// 1. 属性提供一种使用附加信息来批注C++ 构造的标准化方式
// 2. 属性可以抑制代码的特定提示

[[deprecated]] // 属性指定函数不适合使用
void Foo(int);

[[maybe_unused]] // 可能是有意不使用
void test() {};

[[nodiscard]] // 不应该丢弃函数的返回值
int foo(int i) { return i * i; }

int mainTest() {
    foo(42); // discarding return value of function with 'nodiscard' attribute
    return 0;
}
