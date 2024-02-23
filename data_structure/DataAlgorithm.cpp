#include "list/ListDemo.h"
#include "vector/VectorDemo.h"

using namespace std;

int main() {
    // 推荐使用基于范围的for循环，避免迭代引发index索引错误
    std::vector<int> v {1,2,3};
    for(auto& num : v) {
        std::cout << num;
    }

    ListDemo::testList();
    VectorDemo::testVectorIteration();
    VectorDemo::testVectorAlgo();
   return 0;
}