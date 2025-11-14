#include <iostream>

using namespace std;

// TODO. 一个类有两种形式的友元声明
// 1. friend class F; 当最内层的命名空间中找不到任何具有该名称的现有类
// 2. friend F;       不引入新的类，适用于类已经声明了

class FK {};
class Foo {};
typedef Foo FO;

namespace NS {
    class M {
        // friend FF; 找不到类型的声明
        friend class F;   // Introduces F but doesn't define it
        friend class FKl; // Introduces FK which has been defined
    };

    class Demo {
        // friend class FO; Error Redefinition
    };
}

// 可以将模版函数的泛型参数声明成friend
template <typename T>
class my_class {
    friend T;
};

// TODO. 友元关系不是相互的，除非显式指定
// YourClass的成员函数无法访问YourOtherClass的私有成员
class YourClass {
    friend class YourOtherClass;  // Declare a friend class
public:
    YourClass() : topSecret(0) {}
    void printMember() {
        cout << topSecret << endl;
    }
private:
    int topSecret;
};

class YourOtherClass {
public:
    void change(YourClass& yc, int x) {
        yc.topSecret = x;
    }
};


int main() {
    YourClass yc1;
    YourOtherClass yoc1;

    yc1.printMember();
    yoc1.change( yc1, 5 );
    yc1.printMember();

    return 0;
}