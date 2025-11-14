#include <stdlib.h>

// C++ 退出程序的三种方式:
// - 调用 exit 函数
// - 调用 abort 函数
// - 从main执行return语句

// void main(); 必须使用exit程序终止函数
int mainTest() {
    // exit 将终止C++程序, 变量提供的值将作为程序退出代码返回到操作系统
    // exit 允许执行C++运行时终止处理, 调用全局对象析构函数
    exit(0);

    // abort 可立即终止程序
    // abort 函数绕过初始化的全局静态对象的一般析构过程
    abort();

    // return 将exit代码返回到父进程或操作系统中, 以返回值作为参数调用exit(0)
    return 0;
}
