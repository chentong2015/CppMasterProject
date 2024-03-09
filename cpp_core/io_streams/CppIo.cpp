// 提供控制台输出的API
#include <iostream>

// 提供格式化输出的API
#include <stdio.h>

int main() {
    // 标准Output Stream 输出流
    std::ostream& output = std::cout;
    output.operator<<("value");

    // printf() 类似于C语言风格的格式化输出
    char text[] = "1234";
    printf("\n String: %s", text);


    // Input 从控制台获取数据
    std::string str;
    std::cout << "Enter the string: \n"; // << 左移操作符输出
    std::cin >> str;  // >> 右移操作符输入
}

