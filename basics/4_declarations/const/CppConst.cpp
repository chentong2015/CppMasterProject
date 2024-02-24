// TODO. C++ const 关键字指定对象或变量不可修改

#define SIZE 10 // C样式编程定义编译时常量值，宏容易出错且难以调试
constexpr int size = 10; // C++ 优先使用constexpr变量定义编译时常量

int testConst() {
    const double PI = 3.14;  // const and constexpr definitions
    constexpr int MeaningOfLife { 42 };
}

int main() {
    // const通知编译器防止程序员对其进行修改
    const int i = 5;

    // const常量声明数组的大小
    const int maxarray = 255;
    char store_char[maxarray];  // allowed in C++; not allowed in C

    // TODO. const声明指针常量，置于指针变量之前
    char this_char{'a'};
    char that_char{'b'};
    char* myBuf = &this_char;
    char* yourBuf = &that_char;
    char* const constP = myBuf;
    *constP = 'c';  // 指针所指向的地址的值可以改变
    // constP = yourBuf; 指针所执行的地址本身不能边，constP指针不能在用于指向其他地址

    // TODO. const常量在使用指针指向时也必须添加常量关键字
    //  不能使用指针来修改声明成const常量的变量值(通过地址修改)
    const char c = 'a';
    const char* cPointer = &c; // 表示指向的是常量
    // *cPointer = 'b';
}