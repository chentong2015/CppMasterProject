#include <iostream>

class B {
private:
    void p(int i) {
        std::cout << "In B::p() \n";
    }
public:
    void f(char c) {
        std::cout << "In B::f() \n";
    }
};

class C {
public:
    int g();
};

class D : B {
public:
    using B::f; // B::f(char) is now visible as D::f(char)

    // using C::g; using 用于声明成员时，必须引用基类的成员
    // using B::p; using 声明访问基类的成员，则成员名称必须可访问

    void f(int i) {
        std::cout << "In D::f() \n";
        f('c');  // Invokes B::f(char) instead of recursing
    }
};

int mainTest() {
    D myD;
    myD.f(1);
    
    return 0;
}
