#include <iostream> // 标准IO流API
#include <cstdio>   // CPP标准格式化输出

int main() {
    // 标准Output Stream 输出流
    std::ostream& output = std::cout;
    output.operator<<("value");

    // Input 从控制台获取数据
    std::string str;
    std::cout << "Enter String: \n"; // << 左移操作符输出
    std::cin >> str;                 // >> 右移操作符输入

    const char* ptr = "const";
    printf("%s", ptr);

    // keep window open 通过接收数据来维持程序运行
    char ch;
    std::cin >> ch;
    std::cin.get();

    return 0;
}

