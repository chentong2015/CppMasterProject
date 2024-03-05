#include <iostream>
using namespace std;

// sizeof(类型名称或表达式)
int main() {
    char str[] = "Hello, world!";
    char* ptr = str;

    cout << "The size of a char is: " << sizeof(char) << endl;
    cout << "The length of str is " << sizeof(str) << endl;
    cout << "The size of the pointer is " << sizeof(ptr) << endl;
}