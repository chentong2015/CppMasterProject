#include "algo/CommonAlgo.h"
#include "list/ListDemo.h"
#include "vector/VectorDemo.h"
#include "tree/BinarySearchTree.h"

using namespace std;

int main() {
    int nums[5] = {1, 3, 0, 6, 2};
    int second =  CommonAlgo::findSecondLargestValue(nums, 5);
    std::cout << second << std::endl;

    std::vector<int> v {1,2,3};
    for(auto& num : v) {
        std::cout << num;
    }

    ListDemo::testList();
    VectorDemo::testVectorIteration();
    VectorDemo::testVectorAlgo();

    Node node1(5, nullptr, nullptr);
    Node node2(20, nullptr, nullptr);
    Node root(10, &node1, &node2);
    BinarySearchTree::contains(root, 20);
    BinarySearchTree::contains2(root, 20);
    return 0;
}