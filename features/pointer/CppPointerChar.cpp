#include <string>
#include <iostream>

using namespace std;

int main() {
    // TODO. 指向null空字符的指针并非为空值
    char null = '\0';
    char* pNull = &null;
    if (pNull != nullptr) {
        std::cout << "pNull it not null \n";
    }

    // TODO. 使用字符指针指向字符串, 等效于直接操作字符数组
    char charArray[] = "12345";
    char* cP1 = charArray;
    cP1[0] = 'b';
    std::cout << charArray << std::endl;  // "b2345"
    std::cout << cP1 << std::endl;  // "b2345" 等效于直接取字符数组的值
    std::cout << &cP1 << std::endl; // 0x16aee75f0 字符数组的存储地址
    std::cout << *cP1 << std::endl; // 'b' 指针指向的值为第一个字符

    // 常量字符串字面值只能由const char *指针来指向
    char* pC = "value";
    const char* ptr = "value";
    std::cout << ptr << std::endl;  // "value"
    std::cout << *ptr << std::endl; // 'v'

    // 字符指针常量指向常量的数据
    const char* p1 = "Help" + 3;    // p1指向首字符后3个元素
    std::cout << *p1 << std::endl;  // 'p'

    // TODO. strlen(const char *s) 统计指向字符串的字符长度
    const char * pStr = "test";
    int count = strlen(pStr);
    cout << count << endl; // 4

    return 0;
}