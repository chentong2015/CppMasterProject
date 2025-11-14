#include <iostream>

using namespace std;

// initializer_list 初始化表达式列表
// initializer_list<T> 具有特定类型的对象列表
int mainTest() {
    // 默认类型推断成initializer_list<T>
    auto iList = {1, 3, 2};
    std::cout << typeid(iList).name() << std::endl;

    // 直接通过大括号构建list，并复制到另一个list
    initializer_list<int> int_list {5, 6, 7};

    initializer_list<int> int_list2 (int_list);
    if (int_list.begin() == int_list2.begin()) {
        cout << "yes" << endl;
    }

    return 0;
}