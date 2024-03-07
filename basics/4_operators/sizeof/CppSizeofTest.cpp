#include <iostream>
using namespace std;


int main() {










    // 内存中存储数据时会按照大小排齐存储
    char pad0[3] = "ab";    // padding to put 'b' on 4-byte boundary
    char pad1[1];    // padding to make sizeof(x_) multiple of 4
    cout << "The size of a char is: " << sizeof(char) << endl; // 1 bytes
    cout << "The size of a pad0 is: " << sizeof(pad0) << endl; // 3 bytes
    cout << "The size of a pad1 is: " << sizeof(pad1) << endl; // 1 bytes

    cout << "The size of a short is: " << sizeof(short) << endl;  // 2 bytes
    cout << "The size of a int is: " << sizeof(int) << endl;      // 4 bytes

    // TODO.
    char str[] = "hello";
    cout << strlen(str) << endl; // 5 个字符长度
    char* ptr = str; // 8 bytes 指针是64位的地址，共8个字节

    cout << "The length of str is: " << sizeof(str) << endl;      // 6 bytes
    cout << "The size of the pointer is " << sizeof(ptr) << endl; // 8 bytes


    std::string value = "test";
    std::cout << value.size() << std::endl;   // 4 chars
    std::cout << value.length() << std::endl; // 4 chars

    // TODO. 统计字符串所占的字节长度(byte +1)
    std::cout << sizeof(string) << endl;
    std::cout << value.size() * sizeof(string) << endl;

    auto s = "abc";
    cout << strlen(s) << endl; // 3 chars
    cout << sizeof(*s) << endl; // 4 bytes 多出一个byte字节

    auto str = U"ab"s;
    cout << str.size() << endl;
    cout << str.length() << endl;

    // TODO.

    auto s = "abc";
    cout << strlen(s) << endl;

    auto str1 = U"ab"s;
    cout << str1.size() << endl;
    cout << str1.length() << endl;

    //
    cout << str1.size() * sizeof(u32string::value_type) << endl;
    cout << str1.size() * sizeof(u32string) << endl;

    cout << strlen(value1.c_str()) * sizeof(char) << endl;
}