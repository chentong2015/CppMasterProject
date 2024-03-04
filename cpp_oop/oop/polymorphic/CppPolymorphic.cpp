#include <iostream>
#include "CppPolymorphic.h"
#include "../inheritance/head/SubMonster.h"

int main() {
    SubClass subClass;
    subClass.test();

    // TODO. 区别调用的是普通函数还是具有多态性的函数
    // - 多态函数(virtual函数)会调用到指针指向具体对象的函数版本
    // - 非多态函数则只会调用到指针类型上的函数版本
    SuperClass* superP = new OtherClass();
    superP->test();
    superP->testNoVirtual();
    delete superP;

    auto subMonster1 = new SubMonster(10, 100, "name");
    subMonster1->makeNoise();
    delete subMonster1;

    return 0;
}

