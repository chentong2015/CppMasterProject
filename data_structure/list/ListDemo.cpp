#include <iostream>
#include <list>
#include <functional>

int main() {
    std::initializer_list<int> iList;

    auto list = {1, 3, 2};
    std::cout << typeid(list).name() << std::endl;

    std::list<int> list1 {50, 10, 30, 20, 25, 5};
    for(auto item : list1) {
        std::cout << item << " ";
    }

    list1.sort();
    // List1.sort(greater<int>());

    bool isFound = std::binary_search(list1.begin(), list1.end(), 10);
    isFound = binary_search(list1.begin(), list1.end(), 10);
    isFound = binary_search(list1.begin(), list1.end(), 10, std::greater<int>());

    return 0;
}