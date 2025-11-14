#include <iostream>

using namespace std;

class Contained1 {
public:
    Contained1() { cout << "Contained1 ctor\n"; }
};

class Contained2 {
public:
    Contained2() { cout << "Contained2 ctor\n"; }
};

class Contained3 {
public:
    Contained3() { cout << "Contained3 ctor\n"; }
};

class BaseContainer {
public:
    BaseContainer() { cout << "BaseContainer ctor\n"; }
private:
    Contained1 c1;
    Contained2 c2;
};

class DerivedContainer : public BaseContainer {
public:
    DerivedContainer() : BaseContainer() { cout << "DerivedContainer ctor\n"; }
private:
    Contained3 c3;
};


// 构造函数按此顺序执行工作：按声明顺序调用基类和成员构造函数
// 1. 调用基构造函数
// 2. 按照在类声明中出现的"顺序"初始化基类成员
// 3. 调用派生构造函数
int mainTest() {
    DerivedContainer dc;
    // Contained1 ctor
    // Contained2 ctor
    // BaseContainer ctor
    // Contained3 ctor
    // DerivedContainer ctor
    
    return 0;
}
