#include <algorithm>
#include <array>
#include <iostream>
#include <string>

// std提供的数组结构体: 提供数据类型和数组长度
// template <class _Tp, size_t _Size>
// struct array {}
int main() {
    std::array<int, 3> a2 = {1, 2, 3};
    std::sort(a2.begin(), a2.end());
    std::cout << '\n';

    std::array<std::string, 2> a3 = {"E", "\u018E"};
    for (auto s : a3) {
        std::cout << s << ' ';
    }
    std::cout << '\n';

    // std::array<double, 3> 必须指定泛型的类型
    // std::array a4 {3.0, 1.0, 4.0};

    std::array<int, 2> a5; // No list init, a5[0] and a5[1]
    std::array<int, 2> a6 = {}; // List init, a6[0] = a6[1] = 0
    std::array<int, 2> a7 = {1}; // List init, a7[0] = 1, a7[1] = 0
}