#include <iostream>
#include "../instanceof/InstanceOf.h"

// TODO. 向上转换
// 1. 子类向直接父类或者间接父类的强制转换
// 2. 可以是dynamic_cast，也可以是隐式转换 !!

class B { };
class C : public B { };
class D : public C { };

void f(D* pd) {
    C* pc = pd; // upcast, implicit conversion 执行隐式转换
    C* pc1 = dynamic_cast<C*>(pd);   // ok: C is a direct base class
    B* pb = dynamic_cast<B*>(pd);   // ok: B is an indirect base class
}

// TODO. 当出现多重继承时，向上转换将报错
// 1. 指向DD类型对象的指针可以安全地强制转换为BB或CC
// 2. 如果DD强制转换为指向AA对象的指针, 将导致不明确的强制转换错误

class AA { virtual void f(); };
class BB : public AA { virtual void f(); };
class CC : public AA { virtual void f(); };
class DD : public BB, public CC { virtual void f(); };

void f() {
    DD* pd = new DD();
    AA* pa = dynamic_cast<AA*>(pd);   // ambiguous cast fails at runtime

    // 可以执行两个明确的强制转换, 先强制转换成BB对象的指针
    BB* pb = pd;
    BB* pb1 = dynamic_cast<BB*>(pd);   // first cast to BB
    AA* pa2 = dynamic_cast<AA*>(pb1);  // ok: unambiguous
}

