#include <iostream>

class DemoClass {
public:
    int num;
    std::string name;

    void setName(std::string& n) {
       this->name = n;
    }
};

// Accepts a MyClass object 传递一个复制的对象，通过*pointer传递
// This statement modifies only the local copy of mc.
void func_C(DemoClass mc) {
    // 使用"."操作符访问对象属性
    mc.num = 21;
}

// TODO. 复制对象的地址通常比复制整个对象更加高效
// Accepts a MyClass pointer
// All copies of the pointer will point to the same modified object.
void func_A(DemoClass* pDc) {
    // 使用指针访问对象属性
    pDc->num = 3;
    std::string value = "new name";
    pDc->setName(value);
}

// TODO. 将传递对象地址的副本设置成const，避免对象被函数修改
void func_B(const DemoClass* pDc) {
    // pDc->setName(); 无法调用setter函数
    std::cout << pDc->name;
}