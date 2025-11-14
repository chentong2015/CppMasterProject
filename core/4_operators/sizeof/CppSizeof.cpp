#include <iostream>
using namespace std;

// TODO. sizeof() 计算占内存的byte大小，结果为size_t类型
// - 统计某中类型所占内存的大小，类型名称必须用括号括起
// - 统计某个表达式所占内存的大小，表达式可以不使用括号，不计算表达式

struct MyStruct {
    int unm;
    int value;
    char c;
};

class MyClass {
    int num;
public:
    explicit MyClass(int i): num(i) {}
};

int mainTest() {
    // TODO. 当sizeof运算符应用到数组时，它将产生该数组的字节总数
    // sizeof 运算符返回数组的总大小(以字节为单位)
    char array[] = "Hello, world!";
    char *ptr = array;
    cout << "The size of a char is "  << sizeof(char) << endl; // 1  byte  字符类型的大小
    cout << "The length of array is " << sizeof array << endl; // 14 bytes 多一个末尾空字符的统计
    cout << "The size of pointer is " << sizeof ptr   << endl; // 8  bytes 指针的大小

    // TODO. 可以使用sizeof来计算数组中的元素
    int count = (sizeof array) / (sizeof array[0]);
    cout << count << endl;
    cout << "---" << endl;

    // TODO. 当sizeof运算符应用于class、struct或union类型时
    // 结果并非对应各个成员的存储相加的大小，而必须加上其边界上填充的字符
    MyStruct myStruct {};
    cout << sizeof myStruct << endl; // 12 bytes (4 + 4 + 1 + pad)

    MyClass myClass {1};
    cout << sizeof myClass << endl;  // 4 bytes (4 + 0)

    // 当sizeof运算符应用于指针时，它将返回指针大小
    // x86上为4个字节，x64上为8个字节
    MyClass* pClass = &myClass;
    cout << sizeof pClass << endl; // 8 bytes (64位的地址)

    return 0;
}