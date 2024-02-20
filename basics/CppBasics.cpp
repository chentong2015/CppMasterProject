#include <iostream>
#include <vector>

using namespace std;

int mainTest(int argc, const char * argv[]) {
    // C++ Identifiers
    // C++ 标识符号可以下划线开头
    // A-Z or a-z or underscore (_) followed letters, underscores, and digits

    // 使用std::string和std::wstring，几乎可以消除与C样式字符串关联的所有错误
    // 并且可以利用成员函数的优势进行搜索、追加和在前面追加等
    std::string value = "test";
    value.append("last");

    // C++ 11 auto 自动类型推导，特别应用于推导嵌套模板的类型
    // 使用auto在new初始化时以避免类型名称重复，通过指针调用方法
    vector<int> v;
    auto i = v.begin();

    return 0;
}
