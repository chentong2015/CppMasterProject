
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

    // TODO. 非常量指针+常量数据：const关键字声明最左侧
    // - 指针所指向的地址可以改变
    // - 指针所指向的地址的值不能改变
    const char c = 'a';
    const char d = 'd';
    const char* cPointer = &c;
    // *cPointer = 'b';
    cPointer = &d;

    // TODO. 常量指针+非常量数据: const关键字声明在指针变量之前
    // - 指针所指向的地址不能变，只能指向统一地址
    // - 指针所指向的地址的值可以改变
    char cc = 'a';
    char dd = 'b';
    char* const pCC = &cc;
    *pCC = 'c';
    // pCC = &dd; 常量指针所指向的地址不能变
}

void TestConstChar(const char* s, char* const str) {
    s = "test";
    str = "new value"
}