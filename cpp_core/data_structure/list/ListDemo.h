#ifndef CPP_MASTER_LISTDEMO_H
#define CPP_MASTER_LISTDEMO_H

#include <iostream>
#include <list>
#include <functional>

using namespace std;

class ListDemo {

public:
    static void testList() {
        list<int> List1 {50, 10, 30, 20, 25, 5};

        // 自动排序算法的实现
        List1.sort();
        // List1.sort(greater<int>());

        // List for-each循环
        for(auto item : List1) {
            cout << item << " ";
        }

        // 在指定的范围内进行二分法搜索
        bool isFound = binary_search(List1.begin(), List1.end(), 10);
        cout << "Found value 10: " + to_string(isFound) << std::endl;

        isFound = binary_search(List1.begin(), List1.end(), 10, greater<int>());
        cout << "Found value > 10: " + to_string(isFound) << std::endl;
    }
};

#endif //CPP_MASTER_LISTDEMO_H
