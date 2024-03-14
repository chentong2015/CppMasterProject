#include <array>
#include <iostream>
#include <string>

int main() {
    // 编译器会根据初始化的数据类型和数量来构建array数组
    std::array v = {1.0, 2.0};

    // 指定数组的泛型参数和size_t值
    std::array<int, 2> a5; // No list init, a5[0] and a5[1]
    std::array<int, 2> a6 = {}; // List init, a6[0] = a6[1] = 0
    std::array<int, 2> a7 = {1}; // List init, a7[0] = 1, a7[1] = 0
    std::array<int, 3> a2 = {1, 4, 3};

    std::sort(a2.begin(), a2.end());

    // Copy拷贝数组
    std::array a2Copy(a2);
    for (auto item: a2Copy) {
        std::cout << item << std::endl;
    }

    // 遍历数组中的元素
    std::array<std::string, 2> a3 = {"E", "\u018E"};
    for (auto& s : a3) {
        std::cout << s << ' ';
    }
}