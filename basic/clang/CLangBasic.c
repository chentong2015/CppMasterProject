#include <string.h>
#include <stdio.h>
#include <time.h>

// C样式编程定义编译时常量值，宏容易出错且难以调试
#define SIZE 10

int mainTest() {
    // C语言不允许使用常量来声明数组长度
    // C样式数组是许多bug的根源，尤其在旧代码中仍然常用
    const int maxArray = 255;
    char store_char[maxArray];

    // 调用C标准库函数来比较字符串，返回结果与0比较
    const char* ptr1 = "ab";
    const char* ptr2 = "bc";
    int result = strcmp(ptr1, ptr2); // -1
    int result2 = strncmp(ptr2, ptr1, 2);   // 1

    // C语言的标准格式化输出printf()
    printf("%b", result > 0); // 0 布尔判断为false
    printf("%i", result2);

    char text[] = "1234";
    printf("\n String: %s", text);

    // C语言时间类型
    time_t time1;

    return 0;
}