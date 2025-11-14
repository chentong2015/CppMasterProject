#include <iostream>

// TODO. CPP多态类：包含虚函数的类有时被称为“多态类”
// 如果类从包含虚函数的基类派生，则指向"基类类型的指针"可用于调用"派生类对象"中包含的虚函数实现
class SuperClass {
public:
    // TODO. 父类的虚函数需要提供默认的实现，体现多态性
    virtual void testVirtual() {
        std::cout << "SuperClass virtual" << std::endl;
    }

    // 没有多态特征的普通函数
    void testNoVirtual() {
        std::cout << "SuperClass no virtual" << std::endl;
    }
};

class OtherClassA: public SuperClass {
public:
    // 对父类虚函数的重写，实现多态
    void testVirtual() override {
        std::cout << "OtherClassA virtual" << std::endl;
    }

    // "hide覆盖"父类的普通函数
    void testNoVirtual() {
        std::cout << "OtherClassA no virtual" << std::endl;
    }
};

int main() {
    OtherClassA otherClassA;
    otherClassA.testVirtual();
    otherClassA.testNoVirtual();

    // TODO. 区别调用的是普通函数还是多态函数
    // - 多态函数(virtual函数): 调用指针指向具体对象的函数版本
    // - 非多态函数(non-virtual): 调用到指针类型上的函数版本
    SuperClass* superP = new OtherClassA();
    superP->testVirtual();
    superP->testNoVirtual();
    delete superP;
    
    return 0;
}

