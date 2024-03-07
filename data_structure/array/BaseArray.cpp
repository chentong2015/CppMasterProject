#include <iostream>

// 传统的C样式数组是许多bug的根源, 尤其在旧代码中仍然常用

// Array数组必须存储相同数据类型的数据
int main() {
    // 指针指向新分配的数组的首元素地址
    int* pNums = new int[10];
    pNums[0] = 10;

    // 通过指针的坐标移动遍历数组
    for (size_t i = 0; i < 10; ++i) {
        std::cout << pNums[i] << std::endl;
    }

    // 释放分配给数组的内存空间
    delete[] pNums;

    int nums[5] = {1, 3, 0, 6, 2};
    nums[0] = 10;
    return 0;
}



