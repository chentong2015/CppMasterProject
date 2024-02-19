#ifndef CPP_MASTER_VECTORHELPER_H
#define CPP_MASTER_VECTORHELPER_H

#include <iostream>
#include <cstdlib>

using namespace std;

// 遍历vector数组, 提供算法的基本判断
class VectorHelper {

public:
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
        if (num >= t) {
            return 1;
        }
        return 0;
    }
};

#endif //CPP_MASTER_VECTORHELPER_H

