#include <iostream>

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
}

class Demo {
    // friend class FO; Error Redefinition
};

template <typename T>
class my_class {
    friend T;
};

int main() {

    return 0;
}