#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
using namespace std::string_literals;

// 声明使用不同编码格式的字符串字面值
// u8 -> UTF-8 字符文本
// L  -> 宽字符文本
// u  -> UTF-16 字符文本
// U  -> UTF-32 字符文本
void stringDeclaration() {
    // Combining string literals with standard s-suffix
    auto S0 =   "hello"s; // std::string
    auto S1 = u8"hello"s; // std::string before C++20, std::u8string in C++20
    auto S2 =  L"hello"s; // std::wstring
    auto S3 =  u"hello"s; // std::u16string
    auto S4 =  U"hello"s; // std::u32string

    // Combining raw string literals with standard s-suffix
    auto S5 =   R"("Hello \ world")"s; // std::string from a raw const char*
    auto S6 = u8R"("Hello \ world")"s; // std::string from a raw const char* before C++20, encoded as UTF-8,

    // std::u8string in C++20
    auto S7 =  LR"("Hello \ world")"s; // std::wstring from a raw const wchar_t*
    auto S8 =  uR"("Hello \ world")"s; // std::u16string from a raw const char16_t*, encoded as UTF-16
    auto S9 =  UR"("Hello \ world")"s; // std::u32string from a raw const char32_t*, encoded as UTF-32
}

int main() {
    // TODO. nullptr构造字符串是未定义的行为，会导致异常
    std::string str = nullptr;

    std::string value = "test";
    for (char c: value) {
        std::cout << c << std::endl;
    }

    // 获取字符串包含的字符数量(不包括字符串结尾标识符)
    std::cout << value.size() << std::endl;   // 4 chars
    std::cout << value.length() << std::endl; // 4 chars

    // 字符串相关的API操作
    value.append("last");
    std::reverse(value.begin(), value.end());
    std::sort(value.begin(), value.end());
    std::cout << value << std::endl;

    // 强制转换其他类型成字符串
    int num = 10;
    std::string numStr = std::to_string(num);
    
    return 0;
}
