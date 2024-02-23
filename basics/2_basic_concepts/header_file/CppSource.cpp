#include "CppHeader.h" // header in local directory
#include <iostream> // header in standard library

void N::MyClass::doSomething() {
    std::cout << "Doing something!" << std::endl;
}

// 实现嵌套名称空间下的类型
void N::P::InlineClass::doOtherThing() {
    std::cout << "Do other thing" << std::endl;
}