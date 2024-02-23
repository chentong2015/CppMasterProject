#include <iostream>
#include <map>

#include "vector/VectorHelper.h"

using namespace std;

// TODO. 推荐使用标准库容器
// 1. 使用vector替代原始数组，来作为C++中的序列容器
// 2. 使用map(而不是unordered_map)，作为默认关联容器
// 3. 使用set、multimap和multiset
int mainTest() {
    map<string, string> apple_color;
    apple_color["Granny Smith"] = "Green";

    // 推荐使用统一初始化, 而非使用push_back()函数
    vector<string> apples {"item1", "item2"};

    // 使用类型名称直接调用static方法
    std::vector<int> v { 1, 3, 5, 7 };
    int num = VectorHelper::countNumbers(v, 4);
    cout << num << endl;
    return 0;
}