#ifndef CPP_MASTER_VECTORHELPER_H
#define CPP_MASTER_VECTORHELPER_H

#include <iostream>
#include <cstdlib>
#include <vector>

class VectorHelper {

public:
    // 使用index坐标遍历容器中元素
    static int countNumbers(const std::vector<int>& sortedVector, int lessThan){
        int numberLess = 0;
        auto count = sortedVector.size();
        for (int i = 0; i < count; i++){
            if (sortedVector[i] < lessThan) {
                numberLess++;
            }
        }
        return numberLess;
    }

    static int countNumber(const std::vector<int>& intVector, int t) {
        int num = 0;
        auto count = intVector.size();
        for (int j = 0; j < count; j++) {
            if (intVector[j] > 5) {
                num++;
            }
        }
        return num >= t ? 1 : 0;
    }
};

#endif //CPP_MASTER_VECTORHELPER_H

