#include <iostream>

// CPP 名称空间用于避免同名类型的冲突
using namespace std; // 1. 在文件头部引入名称空间

int main() {
    cout << "test";
    std::cout <<  "test std"; // 2. 直接通过名称空间来使用类型
    return 0;
}