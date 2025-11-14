#include <cstdio>

// TODO. 类型别名: 对指定的类型进行重名并且使用
// 1. 别名未引入新类型，且无法更改现有类型名称的含义
// 2. 别名的最简单形式等效于typedef机制

// using identifier = type;
using MyInt = int;

// typedef type new_name
typedef unsigned long UL;

// TODO. 特殊的别名名称(标识大小)，本质上是一个无符号长整型
// typedef unsigned long size_t
size_t size;

// typedef通常与struct组合使用，用于声明结构体的别名
typedef struct myStructTag {
    int   i;
    double f;
} MyStructName;

int mainTest() {
    // 使用自定义的被别名类型
    MyInt value = 10;
    UL item = 10.0;

    // 使用别名的结构体类型
    MyStructName ms;
    ms.i = 10;
    ms.f = 0.99;
    printf("%d %f\n", ms.i, ms.f);
    
    return 0;
}


