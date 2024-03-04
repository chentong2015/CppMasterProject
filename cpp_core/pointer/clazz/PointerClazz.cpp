#include <iostream>
#include "InputNumeric.h"
#include "MyClass.h"

// TODO. 指向class类实例的指针的四种操作
void testPointerManipulation() {
    auto pointerMc = new MyClass(1, "name 1"); // Allocate object on the heap
    pointerMc->print();                 // 1. Access class member
    (*pointerMc).print();               // 拿到指针所指向对象，通过实例调用方法

    MyClass* pointerMc2 = pointerMc;    // 2. Copy the pointer 两个指针指向同一个对象
    pointerMc2->setName("name 2");    // 通过指针修改的也是同一个对象
    pointerMc->print();
    pointerMc2->print();

    MyClass object = *pointerMc;        // 3. Copy the pointed-to object 复制指针指向的对象
    object.setName("name 3");         // 对于对象的修改相互独立，两个对象存储在不同位置
    pointerMc->print();
    object.print();

    MyClass** ppMc = &pointerMc;        // 4. Points to pointer 指向指针的指针
    std::cout << *ppMc << std::endl;    // 指针的值为存储的地址0x60000138d240
    delete pointerMc;
}

int main() {
    testPointerManipulation();

    // 使用母类指针来指向子类的实例化的对象
    NumericInput numericInput;
    CharInput* charInputP = &numericInput;
    std::cout << charInputP->getValue() << std::endl;

    // TODO. pointer being freed was not allocated
    // 如果指针并没有指向在堆内存上malloc动态分配的(new)对象，则不能使用delete进行释放
    // delete charInputP; 不需要释放该指针

    // TODO. input只能调用到它所指向的类型所包含的函数, 无法访问子类的函数
    CharInput* inputP = new NumericInput();
    inputP->add('1');
    std::cout << inputP->getValue() << std::endl;

    // 释放指针指向的堆内存空间，避免内存泄漏
    delete inputP;
    return 0;
}