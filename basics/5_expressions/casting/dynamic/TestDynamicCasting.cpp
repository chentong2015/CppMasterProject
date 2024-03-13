#include <cstdio>
#include <iostream>

struct A {
    virtual void test() {
        printf("in A \n");
    }
};

struct B : A {
    virtual void test() {
        printf("in B \n");
    }

    void test2() {
        printf("test2 in B \n");
    }
};

struct C : B {
    virtual void test() {
        printf("in C \n");
    }

    void test2() {
        printf("test2 in C \n");
    }
};

void castToC(A& a) {
    try {
        C &c = dynamic_cast<C&>(a);
        printf("in GlobalTest \n");
    } catch(std::bad_cast) {
        printf("Can't cast to C \n");
    }
}

int main() {
    A* pa = new C();
    A* pa2 = new B();
    B* pb = new C();
    pa->test();  // test()是虚函数，具有多态性，会调用到指向类型对象的方法
    pb->test2(); // test2()是普通函数，只能调用到指针类型所对应的方法

    // C类型的实例可以向上转换成B类型的指针指向
    B* pb2 = dynamic_cast<B*>(pa);
    if (pb2) {
        pb2->test2();
    }

    // B类型的实例无法向下转换成C类型的指针指向
    C* pc = dynamic_cast<C*>(pa2);
    if (pc) {
        pc->test2();
    }

    C ConStack;
    castToC(ConStack);

    // B向下强制转换报错, B并不知道有C的存在
    B BonStack;
    castToC(BonStack);

    delete pa;
    delete pa2;
    delete pb;
    return 0;
}