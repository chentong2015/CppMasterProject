#include <string>
#include <iostream>

using namespace std;
using namespace std::string_literals;

// TODO. 在源代码中使用"字符集"表示字符和字符串文本的内容
// - 通用字符名称和转义字符允许仅使用"基本源字符集"表示任何字符串
// - 字符文本的字符可以是除保留字符反斜杠(\)、单引号(')和换行符以外的任何字符

// 字符文本根据其前缀以不同的方式进行编码
//    u8 -> UTF-8 字符文本
//    L -> 宽字符文本
//    u -> UTF-16 字符文本
//    U -> UTF-32 字符文本
void testChars() {
    // Character literals
    auto c0 =   'A'; // char
    auto c1 = u8'A'; // char
    auto c2 =  L'A'; // wchar_t
    auto c3 =  u'A'; // char16_t
    auto c4 =  U'A'; // char32_t

    // Multi-character literals
    auto m0 = 'abcd'; // int, value 0x61626364
    cout << m0 << endl;

    // String literals
    auto s0 =   "hello"; // const char*
    auto s1 = u8"hello"; // const char* before C++20, encoded as UTF-8
    // const char8_t* in C++20
    auto s2 =  L"hello"; // const wchar_t*
    auto s3 =  u"hello"; // const char16_t*, encoded as UTF-16
    auto s4 =  U"hello"; // const char32_t*, encoded as UTF-32
    cout << s0 << endl;

    // Raw string literals containing unescaped \ and "
    auto R0 =   R"("Hello \ world")"; // const char*
    auto R1 = u8R"("Hello \ world")"; // const char* before C++20, encoded as UTF-8
    // const char8_t* in C++20
    auto R2 =  LR"("Hello \ world")"; // const wchar_t*
    auto R3 =  uR"("Hello \ world")"; // const char16_t*, encoded as UTF-16
    auto R4 =  UR"("Hello \ world")"; // const char32_t*, encoded as UTF-32
}

// TODO. C++ 语言没有内置的字符串类型 ！！
//  可以使用标准库类型std::string(用于8位char型字符串，后缀s结尾
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

// TODO. 注意转译字符的使用
void testEscapeSequences() {
    char newline = '\n';    // 换行符
    char tab = '\t';        // 水平制表符
    char backspace = '\b';  // 退格符
    char backslash = '\\';  // 反斜杠
    char nullChar = '\0';   // null 字符

    cout << "Newline character: " << newline << "ending" << endl;
    cout << "Tab character: " << tab << "ending" << endl;
    cout << "Backspace character: " << backspace << "ending" << endl;
    cout << "Backslash character: " << backslash << "ending" << endl;
    cout << "Null character: " << nullChar << "ending" << endl;
}