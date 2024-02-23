#include <iostream>
#include "model/MyClass.h"

using namespace std;

// TODO. 指针的创建和销毁, 常量指针的定义
void testPointers() {
    int* p = nullptr; // declare pointer and init, not store a random address
    int i = 5;
    p = &i;           // assign pointer to address of object
    int j = *p;       // de-reference p to retrieve the value at its address
    delete p;         // delete object (please don't forget!)

    const int c = 1;
    const int* pConst = &c; // declare a non-const pointer to const int
    const int c2 = 2;
    pConst = &c2;
    const int* const pConst2 = &c;
    // pConst2 = &c2; pConst2 指针为常量，不能再使用另外的内存地址来赋值
}

// TODO. 指针的四大操作
int testPointerManipulation() {
    MyClass *pointerMc = new MyClass(1, "name 1"); // Allocate object on the heap
    pointerMc->print();                 // 1. Access class member

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
    return 0;
}

// TODO. 指针的移动和遍历
int main() {
    // "Help"字符串常量将转换为指向数组的第一个元素的 char*
    // pointer指针随后递增3个元素，指向最后一个元素"p"
    const char* p1 = "Help" + 3;
    cout << *p1 << endl;

    string str = "hello";
    const char* p2 = str.c_str();
    for (int index = 0; index < str.size(); index++) {
        cout << *p2 << endl;
        p2++;
    }

    // TODO. 指针在移动的时候并不为null，会指向随机地址继续输出
    // while (p != nullptr) {
    //     cout << *p << endl;
    //     p++;
    // }

    delete p1;
    delete p2;
    return 0;
}
