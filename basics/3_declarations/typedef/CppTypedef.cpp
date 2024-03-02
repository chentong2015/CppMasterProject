#include <stdio.h>

// 类型别名: 对指定的类型进行重名并且使用
// - 别名未引入新类型，且无法更改现有类型名称的含义
// - 别名的最简单形式等效于typedef机制
// using identifier = type;

using MyInt = int;
typedef unsigned long UL;

// typedef通常与struct组合起来声明和命名用户定义的类型
typedef struct myStructTag {
    int   i;
    double f;
} MyStruct;

int main() {
    MyInt value = 10;
    UL item = 10.0;

    // 使用别名的结构体类型
    MyStruct ms;
    ms.i = 10;
    ms.f = 0.99;
    printf_s("%d %f\n", ms.i, ms.f);
    return 0;
}


