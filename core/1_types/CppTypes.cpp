#include <iostream>

constexpr int MAXIMUM_ERROR_THRESHOLD = 100;

// C++六种文本类别: 整数、浮点、布尔和指针、字符和字符串
// 推荐在声明变量时对其进行初始化
void testCppBasicTypes(int num) {
    // 整数文本
    int i = 157;         // 首字母非0则表示十进制整型文本
    int k = 0365;        // 首字母为0则表示八进制
    int j = 0x3fff;      // 以0x或0X开头则表示十六进制
    int m = 36'000'000;  // digit separators make large values more readable

    unsigned val_1 = 328u;   // 无符号类型使用u或U后缀
    long val_2 = 0x7FFFFFL;  // 32 为长类型请使用l或L后缀 32bits
    long long val_4 = 108LL; // 64 位长整型类型使用ll或LL后缀

    // 浮点文本: 浮点文本默认为double类型
    float f = 18.09;          // 必须具有小数部分的值
    float ff = 18.06f;        // 浮点型使用f或F后缀
    float f1 = 18.46e0;       // 18.46 使用指数表示
    float f2 = 18.46E1;       // 184.6
    double d = 18.92L;        // 长浮点型使用l或L后缀
    long double d1 = 18.92L;  // 和double不是同一个类型

    // 布尔值文字
    bool bo = true;
    bool bo1 = false;

    // 指针文本 (C++11)
    int* pointer = nullptr;

    // 二进制文本 (C++14)
    auto x = 0B001101 ; // int 使用0B或0b前缀后跟0或1
    auto y = 0b000001 ; // int

    // 魔术常量: 使用指定常量命令来替换
    if (num < MAXIMUM_ERROR_THRESHOLD) {
       std::cout << "num is smaller";
    }
}

// TODO. 注意不同类型变量的初始值
int mainTest() {
    int i0;     // zero-initialized to 0
    int* ptr{}; // initialized to nullptr
    char char1; // '\0'
    float f1;   // zero-initialized to 0.000000000
    double d{}; // zero-initialized to 0.00000000000000000

    int int_array[5] = { 8, 9, 10 };  // the fourth and fifth are initialized to 0
    char s_array[3]{'a', 'b'};  // the third char is initialized to '\0'

    bool check {}; // true
    static bool bool1; // false 静态的布尔值初始为假
    if (check) {
        std::cout << "check is true" << std::endl;
    }
    if (!bool1) {
        std::cout << "bool1 is false" << std::endl;
    }

    testCppBasicTypes(12);
    return 0;
}