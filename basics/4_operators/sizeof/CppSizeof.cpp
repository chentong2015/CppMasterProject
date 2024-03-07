#include <iostream>
using namespace std;

// sizeof(类型名称或表达式)
int main() {
    // 内存中存储数据时会按照大小排齐存储
    char pad0[3];    // padding to put 'b' on 4-byte boundary
    char pad1[1];    // padding to make sizeof(x_) multiple of 4
    char str[] = "hello";
    cout << strlen(str) << endl; // 5 个字符长度

    char* ptr = str; // 8 bytes 指针是64位的地址，共8个字节


    cout << "The size of a char is: " << sizeof(char) << endl; // 1 bytes
    cout << "The size of a pad0 is: " << sizeof(pad0) << endl; // 3 bytes
    cout << "The size of a pad1 is: " << sizeof(pad1) << endl; // 1 bytes

    cout << "The size of a short is: " << sizeof(short) << endl;  // 2 bytes
    cout << "The size of a int is: " << sizeof(int) << endl;      // 4 bytes
    cout << "The length of str is: " << sizeof(str) << endl;      // 6 bytes
    cout << "The size of the pointer is " << sizeof(ptr) << endl; // 8 bytes
}