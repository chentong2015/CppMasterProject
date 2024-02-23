#ifndef CPP_MASTER_VECTORDEMO_H
#define CPP_MASTER_VECTORDEMO_H

#include <iostream>
#include <vector>

class VectorDemo {

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

public:

    // 通过for-each或iterator指针来遍历序列容器
    static void testVectorIteration() {
        std::vector<int> v1a;
        std::vector<int>::iterator Iter1a;
        for (int i = 0; i <= 5; i++ ) {
            v1a.push_back(i);
        }

        for (auto Iter : v1a) {
            std::cout << Iter << " ";
        }
        for(Iter1a = v1a.begin(); Iter1a != v1a.end(); Iter1a++) {
            std::cout << *Iter1a << " ";
        }
    }

    static void testVectorAlgo() {
        std::vector<int> v1;
        for(auto i = -2; i <= 4; ++i){
            v1.push_back(i);
        }

        // Binary_search under the user-defined binary predicate mod_lesser
        sort(v1.begin(), v1.end(), mod_lesser);

        bool isFound = binary_search(v1.begin(), v1.end(), -3, mod_lesser);
        std::cout << isFound << std::endl;
    }
};

#endif //CPP_MASTER_VECTORDEMO_H
