#ifndef CPP_MASTER_ALGOFUNCTIONS_H
#define CPP_MASTER_ALGOFUNCTIONS_H

#include <iostream>

class CommonAlgo {
public:
    // 迭代交换，累加计算
    // fibonacci(...): [1, 1, 2, 3, 5, 8, 13, 21, 34, 55]
    template<typename T>
    T fibonacci(T first, T last) {
        for (int a = 0, b = 1; first != last; first++) {
            *first = b;
            b += std::exchange(a, b);
        }
        return first;
    }

    // 递归方式计算
    static int fibonacci(int n) {
        if (n == 0) {
            return 1;
        }
        if (n == 1) {
            return 2;
        }
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    // TODO. 调用标准库方法的实现
    // std::exchange(oldValue, newValue)
    void switchValue(int* p, int sourceIndex, int targetIndex) {
        int tempValue = p[sourceIndex];
        p[sourceIndex] = p[targetIndex];
        p[targetIndex] = tempValue;
    }

    // 返回一组序列中第二大的数据, 利用数组的头部作为临时存储空间
    // O(N), O(1)
    static int findSecondLargestValue(int* p, const int len) {
        if (len < 2) {
            return -1;
        }
        if (p[0] < p[1]) {
            std::exchange(p[0], p[1]);
        }
        for (int i = 2; i < len; i++) {
            if (p[i] > p[0]) {
                std::exchange(p[1], p[0]);
                std::exchange(p[0], p[i]);
            } else if (p[i] > p[1]) {
                std::exchange(p[1], p[i]);
            }
        }
        return p[1];
    }
};

#endif //CPP_MASTER_ALGOFUNCTIONS_H
