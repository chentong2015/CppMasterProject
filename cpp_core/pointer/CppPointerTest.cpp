#include <iostream>
#include "model/MyClass.h"

using namespace std;

// TODO. 指针的创建销毁与常量指针
void testPointerCreation() {
    string value = "test";
    string* pValue = &value;
    cout << pValue << endl; // 指针的值是指向的具体地址

    int* p = nullptr; // declare pointer and init, not store a random address
    int i = 5;
    p = &i;           // assign pointer to address of object
    int j = *p;       // de-reference p to retrieve the value at its address

    int c = 1;
    int c2 = 2;
    int* pConst = &c; // declare a non-const pointer to const int
    pConst = &c2;
    int* const pConst2 = &c; // 常量指针不能再指向其他地址
    // pConst2 = &c2;
}

// TODO. 指针的四大操作: 查询和修改
void testPointerManipulation() {
    auto pointerMc = new MyClass(1, "name 1"); // Allocate object on the heap
    pointerMc->print();                 // 1. Access class member
    (*pointerMc).print();               // 拿到指针所指向对象，通过实例调用方法

    MyClass* pointerMc2 = pointerMc;    // 2. Copy the pointer 两个指针指向同一个对象
    pointerMc2->setName("name 2");      // 通过指针修改的也是同一个对象
    pointerMc->print();
    pointerMc2->print();

    MyClass object = *pointerMc;        // 3. Copy the pointed-to object 复制指针指向的对象
    object.setName("name 3");           // 对于对象的修改相互独立，两个对象存储在不同位置
    pointerMc->print();
    object.print();

    MyClass** ppMc = &pointerMc;        // 4. Points to pointer 指向指针的指针
    cout << *ppMc << std::endl;         // 指针的值为存储的地址0x60000138d240

    delete pointerMc;
    delete ppMc;
}

// TODO. Allocated memory is leaked 删除指针，避免内存泄漏
int main() {
    std::string* pStr = nullptr;
    delete pStr; // null空指针可以delete回收

    MyClass* mP = new MyClass(); // Warning提示内存泄漏
    // delete mP;
}
