#include <iostream>

using namespace std;

// 第一参数为double数组首元素的地址
void printDoubleArray(double* p, const size_t len) {
    for (size_t i = 0; i < len; ++i) {
        std::cout << p[i] << std::endl;
    }
}

int main() {
    // 由于指针没有初始化，ptr会存储随机地址
    int* ptr;
    cout << ptr << endl;

    // 声明并初始化指针为空，避免存储随机地址
    int* p = nullptr;
    int i = 5;
    p = &i;     // 将指针指向特定的地址
    int j = *p; // 取指针指向地址的数据

    int c = 1;
    int c2 = 2;
    int* pConst = &c;
    pConst = &c2;
    cout << pConst << endl; // 指针的值为64bits内存地址
    cout << sizeof(pConst) << endl; // 指针的长度为8个字节

    // 常量指针不能再指向其他地址
    int* const pConst2 = &c;
    // pConst2 = &c2;

    string value1 = "test";
    string* pValue1 = &value1;
    cout << pValue1 << endl;  // 指针的值为64bits内存地址
    cout << *pValue1 << endl; // test 取指针指向的地址的值

    double value[] = {1,0, 3, 5};
    printDoubleArray(value, 4);
    double d = 10.0;
    printDoubleArray(&d, 1); // 只传递一个长度的数据
    
    return 0;
}
