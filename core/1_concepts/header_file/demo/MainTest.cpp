#include <iostream>

// 如果Demo头文件没有宏定义，则编译错误 error: redefinition of 'Demo'
#include "Demo.h"
#include "DemoSub.h"

int main() {
    int x = 42;
    std::cout << x <<std::endl;

    Demo demo;
    std::cout << demo.foo(x) << std::endl;

    DemoSub demoSub;
    demoSub.print();
    
    return 0;
}
