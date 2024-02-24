// TODO. C++ 常量定义规范

#define SIZE 10 // C样式编程定义编译时常量值，宏容易出错且难以调试
constexpr int size = 10; // C++ 优先使用constexpr变量定义编译时常量

int testConst() {

    const double PI = 3.14;  // const and constexpr definitions

    constexpr int MeaningOfLife { 42 };
}
