#include <iostream>

int mainTest() {
    std::string str1 = "test1";
    std::string str2 = "test2";

    // 关于运算符，正确返回1，错过返回0
    // 结果可用于if条件语句判断
    bool result = str1 < str2;
    std::cout << result << std::endl;
    
    return 0;
}
