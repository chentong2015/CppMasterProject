#ifndef CPP_MASTER_CPPPOLYMORPHIC_H
#define CPP_MASTER_CPPPOLYMORPHIC_H

// TODO. CPP多态类：包含虚函数的类有时被称为“多态类”
// 如果类从包含虚函数的基类派生，则指向基类类型的指针可用于调用派生类对象中包含的虚函数的实现
class SuperClass {
public:
    virtual void test() {
        std::cout << "super class" << std::endl;
    }
};

class SubClass: public SuperClass {
public:
    // 对父类虚函数的重写，实现多态
    void test() override {
        std::cout << "sub class" << std::endl;
    }
};

#endif //CPP_MASTER_CPPPOLYMORPHIC_H
