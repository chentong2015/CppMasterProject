#include <iostream>

using namespace std;

// 不同编码格式的字符字面值(Character literals)
// u8 -> UTF-8 字符文本
// L  -> 宽字符文本
// u  -> UTF-16 字符文本
// U  -> UTF-32 字符文本
int main() {
    auto c0 =   'A'; // char
    auto c1 = u8'A'; // char
    auto c2 =  L'A'; // wchar_t
    auto c3 =  u'A'; // char16_t
    auto c4 =  U'A'; // char32_t
    cout << c1 + c3 << endl;

    // 不同的编码格式对应不同的长度的编码字节数
    cout << sizeof(c1) << endl; // 1 byte
    cout << sizeof(c3) << endl; // 2 bytes
    cout << sizeof(c4) << endl; // 4 bytes

    // 直接初始化单个字符，对字符运算转换成ASCII对应的整数
    char c {'a'};
    int i = c + 1;
    cout << i << endl; // 98

    return 0;
}

// 注意使用特殊的转译字符
void testEscapeSequences() {
    char newline = '\n';    // 换行符
    char tab = '\t';        // 水平制表符
    char backspace = '\b';  // 退格符
    char backslash = '\\';  // 反斜杠
    char nullChar = '\0';   // null字符，作为字符串存储的默认结尾

    cout << "Newline character: " << newline << "ending" << endl;
    cout << "Tab character: " << tab << "ending" << endl;
    cout << "Backspace character: " << backspace << "ending" << endl;
    cout << "Backslash character: " << backslash << "ending" << endl;
    cout << "Null character: " << nullChar << "ending" << endl;
}