#include <iostream>
#include "VectorHelper.h"

int main() {
    // Vector 数组是严格序列的
    std::vector<std::string> v1 = {"item1", "item3", "item2"};
    for(auto& num : v1) {
        std::cout << num << std::endl;
    }

    std::vector<int> vect1 {10, 20, 30};
    std::vector<int> vect2(vect1.begin(), vect1.end());
    for (auto x : vect2) {
        std::cout << x << "\n";
    }

    std::vector<int> v2 {1, 3, 5, 7};
    int num = VectorHelper::countNumLessThanTarget(v2, 4);
    std::cout << num << std::endl;

    VectorHelper::testVectorIteration();
    VectorHelper::testVectorAlgo(v2);

    return 0;
}