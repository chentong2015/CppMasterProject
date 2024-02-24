#ifndef CPP_MASTER_LISTDEMO_H
#define CPP_MASTER_LISTDEMO_H

#include <iostream>
#include <list>
#include <functional>

class ListDemo {

public:
    static void testList() {
        // List for-each循环
        std::list<int> list1 {50, 10, 30, 20, 25, 5};

        for(auto item : list1) {
            std::cout << item << " ";
        }

        // 自动排序算法的实现
        list1.sort();
        // List1.sort(greater<int>());

        bool result = std::binary_search(list1.begin(), list1.end(), 10);
        std::cout << result << std::endl;

        bool isFound = binary_search(list1.begin(), list1.end(), 10);
        std::cout << "Found value 10: " + std::to_string(isFound) << std::endl;

        isFound = binary_search(list1.begin(), list1.end(), 10, std::greater<int>());
        std::cout << "Found value > 10: " + std::to_string(isFound) << std::endl;
    }
};

#endif //CPP_MASTER_LISTDEMO_H
