#include <iostream>

// 命名空间是一个声明性区域，为其内部的标识符(类型、函数和变量等的名称)提供一个范围
// 名称空间用于避免名称冲突，尤其是在基本代码包括多个库时
// 命名空间范围内的所有标识符彼此可见，而没有任何限制
//
// TODO. 访问名称空间内的标识符
// 1. 在文件头部引入名称空间
// 2. 直接通过名称空间来使用类型
using namespace std;

void testStd() {
    cout << "test"; // 在名称空间被引入之后直接使用
    std::cout <<  "test std"; // 通过完全限定名来使用
}

namespace V {
    void f();
}

void V::f() { }
// void V::g() { } 不能使用还没有预先定义的函数

namespace V {
    void g();
}

namespace OuterN {
    void Foo();

    // 可以声明嵌套的命名空间
    namespace Details {
        int CountImpl;
        void Ban() { return Foo(); }
    }

    int Bar() {};
    int Baz(int i) { return Details::CountImpl; }
}