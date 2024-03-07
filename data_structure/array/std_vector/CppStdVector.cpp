#include <iostream>
#include "std_vector/VectorHelper.h"
#include "std_vector/VectorDemo.h"

int main() {
    std::vector<int> v1 {1,2,3};
    for(auto& num : v1) {
        std::cout << num;
    }

    std::vector<std::string> apples {"item1", "item2"};

    std::vector<int> vect1 {10, 20, 30};
    std::vector<int> vect2(vect1.begin(), vect1.end());
    for (auto x : vect2) {
        std::cout << x << "\n";
    }

    std::vector<int> v2 {1, 3, 5, 7};
    int num = VectorHelper::countNumbers(v2, 4);
    std::cout << num << std::endl;

    VectorDemo::testVectorIteration();
    VectorDemo::testVectorAlgo();

    return 0;
}