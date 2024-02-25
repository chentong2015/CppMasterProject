#include <iostream>
#include "CppExtern.h"

// 链接器在全局变量声明之前看到extern时，它会在另一个转换单元中查找定义
extern int i;

// 'i' already has a definition 不能在声明一个相同的全局变量
// int i = 43;   // LNK2005! .

// 不能修改外部链接的全局变量的定义
// extern int i = 43;

int main() {
    std::cout << i << std::endl;

    // 使用引入的header文件中定义的全局变量
    std::cout << valueHeader << std::endl;

    bool check;
    if (check) {
        std::cout << "false";
    }
    std::cout << check;
}