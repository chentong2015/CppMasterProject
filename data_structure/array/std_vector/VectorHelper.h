#ifndef CPP_MASTER_VECTORHELPER_H
#define CPP_MASTER_VECTORHELPER_H

#include <iostream>
#include <cstdlib>
#include <vector>

class VectorHelper {
public:
    // 使用index坐标遍历容器中元素
    template<class T>
    static int countNumLessThanTarget(const std::vector<T>& vector, T target){
        int numberLess = 0;
        for (int i = 0; i < vector.size(); i++){
            if (vector[i] < target) {
                numberLess++;
            }
        }
        return numberLess;
    }

    // 通过for-each或iterator迭代器(指针)来遍历序列容器
    static void testVectorIteration() {
        std::vector<int> vector1;
        std::vector<int>::iterator iterator1;
        for (int i = 0; i <= 5; i++ ) {
            vector1.push_back(i);
        }

        for (auto Iter : vector1) {
            std::cout << Iter << " ";
        }

        for(iterator1 = vector1.begin(); iterator1 != vector1.end(); iterator1++) {
            std::cout << *iterator1 << " ";
        }
    }

    // 直接调用std提供的算法函数
    static void testVectorAlgo(std::vector<int> vector) {
        int count = std::count(vector.begin(), vector.end(), 5);
        std::cout << count << std::endl;

        // Binary_search under the user-defined binary predicate mod_lesser
        std::sort(vector.begin(), vector.end(), mod_lesser);

        bool isFound = std::binary_search(vector.begin(), vector.end(), -3, mod_lesser);
        std::cout << isFound << std::endl;
    }

private:
    // 定义Compare比较器，用于判断集合中元素大小
    static bool mod_lesser(int elem1, int elem2) {
        if (elem1 < 0) {
            elem1 = - elem1;
        }
        if (elem2 < 0) {
            elem2 = - elem2;
        }
        return elem1 < elem2;
    }
};

#endif //CPP_MASTER_VECTORHELPER_H

