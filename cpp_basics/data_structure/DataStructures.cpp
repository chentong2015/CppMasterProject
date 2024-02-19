#include <iostream>
#include "vector/VectorHelper.h"
#include "algo/AlgoFunctions.h"
#include "tree/BinarySearchTree.h"

using namespace std;

int mainTest() {
    // 使用类型名称直接调用static方法
    int result = AlgoFunctions::fibonacci(3);
    cout << result << endl;

    Node n1(1, nullptr, nullptr);
    Node n3(3, nullptr, nullptr);
    Node n2(2, &n1, &n3);
    std::cout << BinarySearchTree::contains(n2, 3);

    // 初始化vector数组
    std::vector<int> v{ 1, 3, 5, 7 };
    int num = VectorHelper::countNumbers(v, 4);
    cout << num << endl;
    return 0;
}
