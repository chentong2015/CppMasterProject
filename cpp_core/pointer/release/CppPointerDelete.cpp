#include <iostream>
#include "../clazz/MyClass.h"

// Warning: Allocated memory is leaked
// 指针在使用的过程中，如果没有及时删除，则会造成内存泄漏
int main() {
    // null空指针可以delete回收
    std::string* pStr = nullptr;
    delete pStr;

    MyClass* mP = new MyClass();
    mP->print();
    delete mP;

    MyClass** mPP = &mP;
    // delete mPP; 指向指针的指针不需要delete回收
}
