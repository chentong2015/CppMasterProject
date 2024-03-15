#include <iostream>

using namespace std;

class BaseClass1 {
public:
    BaseClass1() { cout << "BaseClass1 ctor\n"; }
};

class BaseClass2 {
public:
    BaseClass2() { cout << "BaseClass2 ctor\n"; }
};

class BaseClass3 {
public:
    BaseClass3() { cout << "BaseClass3 ctor\n"; }
};

// 如果类从多个基类派生，将按照派生类声明中列出的顺序调用基类构造函数
class DerivedClass : public BaseClass1, public BaseClass2, public BaseClass3 {
public:
    DerivedClass() { cout << "DerivedClass ctor\n"; }
};

int main() {
    DerivedClass dc;
    // BaseClass1 ctor
    // BaseClass2 ctor
    // BaseClass3 ctor
    // DerivedClass ctor
    return 0;
}