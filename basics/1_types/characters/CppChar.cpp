#include <iostream>

using namespace std;

// 使用char*指针来指向不同编码的字符串序列
void charPointerString() {
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



int main() {
    char a {'1'};

    auto c0 =   'A'; // char
    auto c1 = u8'A'; // char
    auto c2 =  L'A'; // wchar_t
    auto c3 =  u'A'; // char16_t
    auto c4 =  U'A'; // char32_t

    // 不同的编码格式对应不同的长度的编码字节数
    cout << sizeof(c1) << endl; // 1 byte
    cout << sizeof(c3) << endl; // 2 bytes
    cout << sizeof(c4) << endl; // 4 bytes

    // 直接初始化单个字符
    char this_char {'a'};
    int position = this_char + 1;
    cout << this_char + 2 << endl; //

    return 0;
}
