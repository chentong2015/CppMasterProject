#include <iostream>

// TODO. 包含纯虚函数的类型为抽象类型
class AbstractClass {
public:
    // 声明一个纯虚函数(pure virtual method)
    // 没有函数的实现主体，只能由继承类型来最终实现
    virtual void test() = 0;
};

class ConcreteClass: public AbstractClass {
public:
    // 纯虚函数的实现
    void test() override {
        std::cout << "test concrete" << std::endl;
    }
};

int main() {
    // 无法创建抽象类型的实例
    // AbstractClass abstractClass;

    ConcreteClass concreteClass;
    concreteClass.test();
    
    return 0;
}
