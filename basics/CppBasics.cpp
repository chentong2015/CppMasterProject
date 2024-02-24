#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {

    // 使用std::string和std::wstring，几乎可以消除与C样式字符串关联的所有错误
    // 并且可以利用成员函数的优势进行搜索、追加和在前面追加等
    std::string value = "test";
    value.append("last");

    // 使用auto在new初始化时以避免类型名称重复，通过指针调用方法
    vector<int> v;
    auto i = v.begin();

    // 调用std名称空间中的函数实现类型转换
    int j = 10;
    std::cout << "j=" + std::to_string(j) << std::endl;

    return 0;
}
