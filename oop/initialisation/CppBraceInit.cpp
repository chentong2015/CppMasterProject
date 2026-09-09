#include <iostream>

// TODO. 区别大括号和括号初始化对象的区别
// Item 7: Distinguish between () and {} when creating objects.

class Widget {
private:
    // 括号不能用于初始化非静态的成员数据
    int x{0};
    int y = 0;
    
    // int z(0);
};

int main() {
    // 通常可以使用括号/赋值号/大括号来初始化
    int x(0);  // initializer is in parentheses
    int y = 0; // initializer follows "="
    int z { 0 }; // initializer is in braces
    int z1 = { 0 }; // initializer uses "=" and braces

    return 0;
}