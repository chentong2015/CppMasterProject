#include <iostream>

using namespace std;

// TODO. 三种声明(创建)指针的方式，效果一致
// - string* p; 推荐的声明方式
// - string *p;
// - string * p;
int main() {
    string value = "test";
    string* pValue = &value;
    cout << *pValue << endl; // test 取指针指向的地址的值
    cout << pValue << endl;  // 0x16d8cb5e0 指针的值是指向的64bits内存地址

    int* p = nullptr; // declare pointer and init, not store a random address
    int i = 5;
    p = &i;           // assign pointer to address of object
    int j = *p;       // de-reference p to retrieve the value at its address

    int c = 1;
    int c2 = 2;
    int* pConst = &c; // declare a non-const pointer to const int
    pConst = &c2;
    int* const pConst2 = &c; // 常量指针不能再指向其他地址
    // pConst2 = &c2;
}
