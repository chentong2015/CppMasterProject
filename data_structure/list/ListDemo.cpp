#include <iostream>
#include <list>
#include <functional>

// std::list 自带相关操作的API
int main() {
    std::list<int> list1 {50, 10, 30, 20, 25, 5};
    for(auto item : list1) {
        std::cout << item << " ";
    }

    list1.sort();
    list1.sort(std::greater<int>());

    bool isFound = std::binary_search(list1.begin(), list1.end(), 10);
    isFound = binary_search(list1.begin(), list1.end(), 10);
    isFound = binary_search(list1.begin(), list1.end(), 10, std::greater<int>());

    return 0;
}