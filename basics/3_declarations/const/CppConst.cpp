
#define SIZE 10 // C样式编程定义编译时常量值，宏容易出错且难以调试
constexpr int size = 10; // C++ 优先使用constexpr变量定义编译时常量

// const 类型限定符，指定对象或变量不可修改
// - const 确保在编译时不会被修改值，常用在函数和变量的声明
// - const 类型与其非const类型是两种不同的类型

int main() {
    // 1. 常量变量必须与初始值设定项一起声明
    const int i = 5;
    const double PI = 3.14;

    // const常量声明数组的大小，C++允许使用常量来声明数组长度，C不允许
    const int maxArray = 255;
    char store_char[maxArray];

    // 常量指针的const关键字声明在变量之前
    char cc = 'a';
    char dd = 'b';
    char* const pCC = &cc; // 常量指针所指向的是非常量数据
    *pCC = 'c';   // 常量指针所指向地址的值可以改变
    // pCC = &dd; 常量指针所指向的地址不能变

    // 如果常量指针指向的是常量数据，则指针所指向地址的值不能修改
    const char c = 'a';
    const char* cPointer = &c;
    // *cPointer = 'b';
}