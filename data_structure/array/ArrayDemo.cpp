#include <iostream>

// 将数组传递给函数，该数组将作为指向第一个元素的指针传递
// 将数组参数p声明并定义为const，使其在函数块中为只读
void process(double* p, const size_t len) {
    std::cout << "process: \n";
    for (size_t i = 0; i < len; ++i) {
       std::cout << p[i] << std::endl;
    }
}

void switchValue(int* p, int sourceIndex, int targetIndex) {
    int tempValue = p[sourceIndex];
    p[sourceIndex] = p[targetIndex];
    p[targetIndex] = tempValue;
}

// 返回一组序列中第二大的数据
// 利用数组的头部作为临时存储空间，避免创建额外的变量
// O(N), O(1)
int findSecondLargestValue(int* p, const int len) {
    if (len < 2) {
        return -1;
    }
    if (p[0] < p[1]) {
        switchValue(p, 0, 1);
    }
    for (int i = 2; i < len; i++) {
        if (p[i] > p[0]) {
            switchValue(p, 0, 1);
            switchValue(p, i, 0);
        } else if (p[i] > p[1]) {
            switchValue(p, i, 1);
        }
    }
    return p[1];
}

// TODO. 两种初始化数组的方式
int main() {
    int nums[5] = {1, 3, 0, 6, 2};
    int nums2[5] = {1, 3, 0, 6, 2};

    int second = findSecondLargestValue(nums, 5);
    std::cout << second << std::endl;

    return 0;
}



