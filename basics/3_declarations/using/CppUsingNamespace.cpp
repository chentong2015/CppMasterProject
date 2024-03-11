#include <iostream>

// TODO. Using用于将名称引入指定的声明性区域
using namespace std;

void f() {
    cout << "In f \n";
}

// TODO. 不同名称空间下可以声明项目的函数原型
namespace A {
    void f() {
        cout << "In A::f \n";
    }
    void g() {
        cout << "In A::g \n";
    }
}

// 将全局函数和指定的名称空间下函数引入到X名称空间中
namespace X {
    using ::f;  // global f is also visible as X::f
    using A::g; // A's g is now visible as X::g
}

// 在全局函数中调用指定名称空间下的函数
void h() {
    X::f(); // calls ::f
    X::g(); // calls A::g
}

int main() {
    h();
}