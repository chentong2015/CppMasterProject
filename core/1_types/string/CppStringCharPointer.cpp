#include <iostream>

int main() {
    testStringToCharArray();

    std::string value = "test__";
    printf("Trim: %s\n", trimEndUnderlines(value.data()));
}

// TODO. 通过字符指针逐个遍历字符串(字符数组)
void loopStringChars() {
    std::string str = "value";

    // 判断字符指针的值是否为字符串结尾null空字符
    char* p1 = str.data();
    while ((*p1 != '\0')) {
        std::cout <<  *p1 << std::endl;
        p1++;
    }

    // 通过字符指针的index向移动来访问
    std::string str2 = "hello";
    const char* p2 = str2.c_str();
    for (int index = 0; index < str2.size(); index++) {
        std::cout << p2[index] << std::endl;
    }

    // 不能通过指针是否为nullptr来判断是否遍历到结尾
    // 因为字符串结尾null空字符所对应的地址非空，之后指针将指向Random地址
    auto ptr = str.data();
    while (ptr != nullptr) {
        std::cout << *ptr << std::endl;
    }
}

// TODO. string转换成char[]数组，补充末尾位置存储null末尾标识符
// - std::strcpy 拷贝string的全部字符
// - std::strncpy 拷贝指定bytes长度的字符，不足的位置使用null字符填充
void testStringToCharArray() {
    std::string str = "test";
    
    char arr[17]; 
    // char arr[str.length() + 1]; 新版本的语言特性

    std::strcpy(arr, str.c_str());
    std::cout << sizeof arr << std::endl; // 5 bytes

    // The following sets chararray to “abc\0\0\0”:
    char chararray[6];
    std::strncpy(chararray, "abc", sizeof(chararray));

    // The following sets chararray to “abcdef”:
    char chararray2[6];
    std::strncpy(chararray2, "abcdefgh", sizeof(chararray2));
}

// 自定义字符串的Trim()操作，只需把末尾字符设置成字符串结尾的null字符
char* trimEndUnderlines(char* str) {
    // 指针指向字符数组的末尾字符地址
    char *pStr = str + strlen(str) - 1;
    while((pStr >= str) && (*pStr == '_')) {
        *pStr = '\0';
        pStr--;
    }
    return str;
}