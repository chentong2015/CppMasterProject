#ifndef CPP_MASTER_CPPPOLYMORPHIC_H
#define CPP_MASTER_CPPPOLYMORPHIC_H

// TODO. CPP多态类：包含虚函数的类有时被称为“多态类”
// 如果类从包含虚函数的基类派生，则指向"基类类型的指针"可用于调用"派生类对象"中包含的虚函数实现
class SuperClass {
public:
    // 纯虚函数的定义
    virtual void test() = 0;

    // 普通函数没有多态的特征
    void testNoVirtual() {
        std::cout << "super no virtual" << std::endl;
    }
};

class SubClass: public SuperClass {
public:
    // 对父类虚函数的重写，实现多态
    void test() override {
        std::cout << "sub class" << std::endl;
    }
};

class OtherClass: public SuperClass {
public:
    void test() override {
        std::cout << "other class" << std::endl;
    }

    // 相当于覆盖父类的普通函数
    void testNoVirtual() {
        std::cout << "other no virtual" << std::endl;
    }
};

#endif //CPP_MASTER_CPPPOLYMORPHIC_H
