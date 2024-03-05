#include <string>
#include <iostream>

using namespace std;
using namespace std::string_literals;

// TODO. C++ 语言没有内置的字符串类型 ！！
//  可以使用标准库类型std::string(用于8位char型字符串，后缀s结尾

// 自定义字符串的Trim()操作
char* trimEndUnderlines(char* szSource) {
    // 设置指针指向字符数组的末尾字符地址
    char *pszEOS = szSource + strlen(szSource) - 1;

    // 将末尾被删除的'_'字符设置成null
    while((pszEOS >= szSource) && (*pszEOS == '_')) {
        *pszEOS = '\0';
        pszEOS--;
    }
    return szSource;
}

// 声明使用不同编码格式的字符串字面值
void testString() {
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
    // 使用std::string和std::wstring，几乎可以消除与C样式字符串关联的所有错误
    // 并且可以利用成员函数的优势进行搜索、追加和在前面追加等
    std::string value = "test";
    value.append("last");

    //
    auto s = "abc";
    cout << strlen(s) << endl;

    auto str = U"ab"s;
    cout << str.size() << endl;
    cout << str.length() << endl;

    //
    cout << str.size() * sizeof(u32string::value_type) << endl;

    char cArray[] = "12345_____";
    printf("Trim: %s\n", trimEndUnderlines(cArray));

    std::string value = "test__";
    printf("Trim: %s\n", trimEndUnderlines(value.data()));

    // 调用std函数实现string类型转换
    int j = 10;
    std::cout << "j=" + std::to_string(j) << std::endl;
}