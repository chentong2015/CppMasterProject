// 提供控制台输出的API
#include <iostream>

// 提供格式化输出的API
#include <stdio.h>

int main() {
    // 标准Output Stream 输出流
    std::ostream& output = std::cout;
    output.operator<<("value");

    char text[] = "1234";
    printf("\n String: %s", text);
}

