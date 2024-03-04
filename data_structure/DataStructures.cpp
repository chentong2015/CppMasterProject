#include <iostream>
#include <map>
#include "vector/VectorHelper.h"

using namespace std;

// TODO. 推荐使用标准库容器
// 1. 使用vector替代原始数组，来作为C++中的序列容器
// 2. 使用map(而不是unordered_map)，作为默认关联容器
// 3. 使用set、multimap和multiset
int main() {
    // 推荐直接初始化数据
    std::vector<string> apples {"item1", "item2"};

    vector<int> vect1 {10, 20, 30};
    vector<int> vect2(vect1.begin(), vect1.end());
    for (auto x : vect2) {
        cout << x << " ";
    }

    std::vector<int> v {1, 3, 5, 7};
    int num = VectorHelper::countNumbers(v, 4);
    cout << num << endl;
    return 0;
}