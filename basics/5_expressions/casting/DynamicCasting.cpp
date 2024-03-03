#include <iostream>
#include "../instanceof/InstanceOf.h"

// TODO. dynamic_cast 用于多态类型的转换
// dynamic_cast<TargetType>(castValue) 转换的值必须据具有多态性

// 1. 向上转换：子类向父类的强制转换
class B { };
class C : public B { };
class D : public C { };

void f(D* pd) {
    C* pc = dynamic_cast<C*>(pd);   // ok: C is a direct base class
    B* pb = dynamic_cast<B*>(pd);   // ok: B is an indirect base class
}

// 2. 向下转换: 从给定类移至从中派生的类，可能造成问题
class BClass {
public:
    virtual void print() {
        std::cout << "BClass print \n";
    }
};

class DClass : public BClass {
public:
    void print() override {
        std::cout << "DClass print \n";
    }
    void test() const {
        std::cout << "test \n";
    };
};

int main() {
    // TODO. 在指针的向下转换时先判断是否是某个类型的实例
    BClass* pb = new DClass();
    if (instanceof<DClass>(pb)) {
        std::cout << "is DClass instance \n";
        DClass* pd = dynamic_cast<DClass*>(pb);
        pd->print();
        pd->test();
        // delete pd; 虽然非null但无需删除，因为是强转而来而并不是"直接"指向动态分配的内存
    }
    delete pb; // 通过删除pb来回收动态分配给DClass对象的内存空间

    // TODO. 将指针向下转换成非某个类型对象的指针，会造成指针为null
    BClass* pb2 = new BClass();
    DClass* pd2 = dynamic_cast<DClass*>(pb2);
    if (pd2 == nullptr) {
        std::cout << "is null pointer \n";
    }
    pd2->print(); // 空指针无法调用方法
    pd2->test();
    delete pb2;
    delete pd2;

    return 0;
}
