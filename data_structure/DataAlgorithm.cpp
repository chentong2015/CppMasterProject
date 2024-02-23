#include "list/ListDemo.h"
#include "vector/VectorDemo.h"
#include "tree/BinarySearchTree.h"

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
    cout << "----------" << endl;

    Node node1(5, nullptr, nullptr);
    Node node2(20, nullptr, nullptr);
    Node root(10, &node1, &node2);
    BinarySearchTree::contains(root, 20);
    BinarySearchTree::contains2(root, 20);

    return 0;
}