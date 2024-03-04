#include <iostream>
#include <vector>

int main() {
    // 使用std::string和std::wstring，几乎可以消除与C样式字符串关联的所有错误
    // 并且可以利用成员函数的优势进行搜索、追加和在前面追加等
    std::string value = "test";
    value.append("last");

    // 使用auto在new初始化时以避免类型名称重复，通过指针调用方法
    std::vector<int> v;
    auto i = v.begin();

    // 调用std函数实现string类型转换
    int j = 10;
    std::cout << "j=" + std::to_string(j) << std::endl;

    // 调用std函数实现值的交换，并返回旧值
    int oldValue = 10;
    int newValue = 20;
    int result = std::exchange(oldValue, newValue);
    std::cout << result;

    long l = 10.0;
    long val_2 = 0x7FFFFFL;
    int k = static_cast<int>(val_2);
    std::cout << k;
    return 0;
}
