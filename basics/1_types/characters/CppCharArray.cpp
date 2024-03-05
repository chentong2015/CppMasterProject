#include <iostream>

// TODO. CPP字符数组和字符串的转换, 字符串的遍历
// 指针在遍历所有字符后，会继续移动到一个Random地址
// 不能判断nullptr空指针，除非遍历的末尾被确定成nullptr
// while (p != nullptr) {
//   cout << *p << endl;
//   p++;
// }
void testStringToCharArray() {
    std::string str = "value";
    std::string* strPointer = &str; // 字符串指针指向某字符串地址

    char* p1 = str.data();   // 取字符串的data数据，返回字符类型的指针
    while ((*p1 != '\0')) {  // 判断指针执行的值是否为null字符
        std::cout <<  *p1 << std::endl;
        p1++;
    }

    std::string str2 = "hello";
    const char* p2 = str2.c_str(); // 等效于返回data(), 首字符的地址
    for (int index = 0; index < str2.size(); index++) {
        std::cout << p2[index] << std::endl;
    }
}

int main() {
    // 常量字符串的字面值只能用常量的char指针来指向
    // C++11 does not allow conversion from string literal to 'char *'
    char* pC = "value";
    const char* pCC = "value";

    // 字符指针指向字符数组第一个字符的内存地址,
    char charArray[] = "12345 ";
    charArray[0] = 'a';
    char* cP1 = charArray;
    cP1[0] = 'b';

    // 将字符串常量转字符数组并交给字符指针指向，必须添加const
    // p1指针指向数组的第一个元素地址，随后递增3个元素指向最后一个元素p
    const char* p1 = "Help" + 3;
    std::cout << *p1 << std::endl;

    return 0;
}

