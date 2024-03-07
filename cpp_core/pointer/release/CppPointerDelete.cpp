#include <iostream>

class MyClass {
public:
    void print() {}
};

class CharInput {
public:
    void test() {}
};

class NumericInput : public CharInput {
};

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

    // 使用母类指针来指向子类的实例化的对象
    NumericInput numericInput;
    CharInput* charInputP = &numericInput;
    charInputP->test();

    // TODO. pointer being freed was not allocated
    // 如果指针并没有指向在堆内存上malloc动态分配的(new)对象，则不能delete释放
    // delete charInputP;

    return 0;
}
