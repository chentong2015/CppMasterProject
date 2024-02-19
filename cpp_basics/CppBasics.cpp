#include <iostream>

// C++ Identifiers
// letter A to Z or a to z or an underscore (_) followed letters, underscores, and digits.

int mainTest(int argc, const char * argv[]) {
    // 使用std::string和std::wstring，几乎可以消除与C样式字符串关联的所有错误
    // 并且可以利用成员函数的优势进行搜索、追加和在前面追加等
    std::string value = "test";
    value.append("last");

    return 0;
}
