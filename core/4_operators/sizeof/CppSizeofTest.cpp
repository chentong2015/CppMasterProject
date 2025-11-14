#include <iostream>
using namespace std;

// 内存中存储数据时会按照大小排齐存储
void countSizeofArray() {
    // TODO. 只有传递字符数组时才会统计到字符串末尾的null字符 ！！
    char pad0[3] = "ab";    // padding to put 'b' on 4-byte boundary
    char pad1[1];           // padding to make sizeof(x_) multiple of 4
    cout << sizeof(pad0) << endl; // 3 bytes +1字符串结尾字节
    cout << sizeof(pad1) << endl; // 1 byte

    char str[] = "hello";
    char* pStr = str;
    cout << strlen(str) << endl; // 5 chars
    cout << sizeof(str) << endl;   // 6 bytes +1字符串结尾字节
    cout << sizeof(pStr) << endl;  // 8 bytes 64位的地址，共8个字节

    auto ptr = "abc";
    cout << strlen(ptr) << endl; // 3 chars
    cout << sizeof(*ptr) << endl;  // 1 byte 只取第一个首字符
    cout << sizeof "abc" << endl;  // 4 bytes +1字符串结尾字节，直接传递字符数组
}

int main() {
    cout << sizeof(char) << endl;   // 1 byte
    cout << sizeof(short) << endl;  // 2 bytes
    cout << sizeof(int) << endl;    // 4 bytes

    cout << "--------------" << endl;
    countSizeofArray();
    cout << "--------------" << endl;

    std::string value = "test";
    std::cout << value.size() << std::endl;          // 4 chars
    std::cout << value.length() << std::endl;        // 4 chars
    std::cout << sizeof(string::value_type) << endl; // 1 byte 采用UTF-8编码测试
    std::cout << sizeof(string) << endl;             // 24 bytes

    std::string strArray[] = {"a", "b"};
    std::cout << sizeof strArray << std::endl; // 48 bytes (24 + 24)

    std::string* ptr = &value;
    std::cout << sizeof(ptr) << endl; // 8 bytes 指针的大小

    auto str = U"ab"s;
    cout << str.size() << endl;   // 2 chars
    cout << str.length() << endl; // 2 chars
    cout << sizeof(u32string::value_type) << endl; // 4 bytes 采用UTF-32编码测试
    cout << sizeof(u32string) << endl;             // 24 bytes

    return 0;
}