#include <iostream>

// 字符指针来指向不同编码格式的字符数组(字符串)
void charPointerString() {
    // String literals
    auto s0 =   "hello"; // const char*
    auto s1 = u8"hello"; // const char* before C++20, encoded as UTF-8
    // const char8_t* in C++20
    auto s2 =  L"hello"; // const wchar_t*
    auto s3 =  u"hello"; // const char16_t*, encoded as UTF-16
    auto s4 =  U"hello"; // const char32_t*, encoded as UTF-32
    std::cout << s0 << std::endl;

    // Raw string literals containing unescaped \ and "
    auto R0 =   R"("Hello \ world")"; // const char*
    auto R1 = u8R"("Hello \ world")"; // const char* before C++20, encoded as UTF-8
    // const char8_t* in C++20
    auto R2 =  LR"("Hello \ world")"; // const wchar_t*
    auto R3 =  uR"("Hello \ world")"; // const char16_t*, encoded as UTF-16
    auto R4 =  UR"("Hello \ world")"; // const char32_t*, encoded as UTF-32
}

// TODO. 由于C++字符串的存储结构，使字符数组的存储多出一个字节的长度
int main() {
    char charArray[] = "12345"; // "12345\0"
    charArray[0] = 'a';
    std::cout << charArray << std::endl; // "a2345" 输出字符数组的值
    std::cout << strlen(charArray) << std::endl; // 5 chars 统计字符数组的字符长度
    std::cout << sizeof charArray << std::endl;     // 6 bytes 统计字符数组的总大小

    for (size_t i = 0; i < strlen(charArray); ++i) {
        std::cout << charArray[i] << std::endl;
    }

    char chars[] = "hello"; // "hello\0"
    int i = 0;
    while( chars[i] != '\0'){
        printf("%c ", chars[i]);
        i++;
    }

    char chars1[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    for (char c: chars1) {
        std::cout << c << std::endl;
    }
}