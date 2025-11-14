
#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base()" << endl; }
    Base(const Base& other) { cout << "Base(Base&)" << endl; }
    explicit Base(int i) : num(i) { cout << "Base(int)" << endl; }
    explicit Base(char c) : letter(c) { cout << "Base(char)" << endl; }
private:
    int num;
    char letter;
};

// TODO. 派生类可以使用using声明从直接基类继承构造函数
class Derived : Base {
public:
    // Inherit all constructors from Base
    using Base::Base;
private:
    // Can't initialize newMember from Base constructors.
    int newMember{ 0 };
};

int mainTest() {
    Derived d1(5);   // Base(int)
    Derived d2('c'); // Base(char)
    Derived d3 = d2;   // Base(Base&)
    Derived d4;        // Base()

    return 0;
}