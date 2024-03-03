#include <iostream>
#include "CppPolymorphic.h"
#include "../inheritance/head/SubMonster.h"

int main() {
    SuperClass* superClass = new SubClass();
    superClass->test();
    delete superClass;



    return 0;
}

