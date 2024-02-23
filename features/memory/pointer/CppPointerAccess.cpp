#include <iostream>
#include "model/MyClass.h"
#include "model/NumericInput.h"

// TODO. 复制对象的地址通常比复制整个对象更加高效
// Accepts a MyClass pointer
// All copies of the pointer will point to the same modified object.
void func_A(MyClass* mc) {
    // 使用指针访问对象属性
    mc->num = 3;
    mc->setName("new name");
}

// TODO. 将传递对象地址的副本设置成const，避免对象被函数修改
void func_B(const MyClass* mc) {
    // mc->setName("new name"); 无法调用setter函数
    std::cout << mc->name;
}

// Accepts a MyClass object 传递一个复制的对象，通过*pointer传递
// This statement modifies only the local copy of mc.
void func_C(MyClass mc) {
    // 使用"."操作符访问对象属性
    mc.num = 21;
    mc.print();
}

int main() {
    // 使用母类指针来指向子类的实例化的对象
    CharInput* input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    cout << input->getValue() << endl;
    delete input;
    return 0;
}