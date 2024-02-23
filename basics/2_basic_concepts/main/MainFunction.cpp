#include <iostream>
#include <string.h>

using namespace std;

// 所有C++程序都必须具有main函数
// 尝试在没有main函数的情况下编译C++程序，编译器将引发错误
//
// main 函数是源代码开始执行的位置
// 在程序进入main函数之前，没有显式初始值设定项的所有static类成员都设为零
//
// TODO. main 两种函数声明
// - main 未指定返回值，编译器会提供零作为返回值
// - main 如果设置void返回参数，则无法使用return语句将exit代码返回到父进程或操作系统中
// int main();
// void main(); 必须使用exit程序终止函数
int main(int argc,        // 参数计数的整数 >= 1
         char *argv[],    // 命令行自变量的字符数组
         char *envp[]) {  // 环境变量的字符数组

    bool numberLines = false; // Default is no line numbers.

    // If /n is passed to the .exe, display numbered listing of environment variables.
    if ((argc == 2) && strcmp(argv[1], "/n" ) == 0) {
        numberLines = true;
    }

    // Walk through list of strings until a NULL is encountered.
    for ( int i = 0; envp[i] != nullptr; ++i ){
        if (numberLines) {
            cout << i << ": "; // Prefix with numbers if /n specified
        }
        cout << envp[i] << "\n";
    }
}


