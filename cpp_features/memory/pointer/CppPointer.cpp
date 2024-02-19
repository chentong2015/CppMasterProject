#include <iostream>

class MyClass {
public:
    int num = 0;
    std::string name;

    void print() const {
        std::cout << name << ":" << num << std::endl;
    }
};

// TODO. 复制对象的地址通常比复制整个对象更加高效
// Accepts a MyClass pointer
// All copies of the pointer will point to the same modified object.
void func_A(MyClass* mc) {
    // 使用指针访问对象属性
    mc->num = 3;
}

// TODO. 将传递对象地址的副本设置成const，避免对象被函数修改
void func_B(const MyClass* mc) {
    std::cout << mc->name << std::endl;
}

// Accepts a MyClass object 传递复制的一个对象
// mc is a regular object, not a pointer.
// This statement modifies only the local copy of mc.
void func_C(MyClass mc) {
    // 使用"."操作符访问对象属性
    mc.num = 21;
    std::cout << "Local copy of mc:";
    mc.print();
}

int mainTest() {
    int* p = nullptr; // declare pointer and init, not store a random address
    int i = 5;
    p = &i;     // assign pointer to address of object
    int j = *p; // dereference p to retrieve the value at its address
    std::cout << "j=" + std::to_string(j) << std::endl;

    auto mc = new MyClass(); // allocate object on the heap
    mc->print(); // access class member
    delete mc;   // delete object (please don't forget!)


    // declare a C-style string. Compiler adds terminating '\0'.
    const char* str = "Hello world";

    const int c = 1;
    const int* pConst = &c; // declare a non-const pointer to const int
    const int c2 = 2;
    pConst = &c2;  // OK pConst itself isn't const

    const int* const pConst2 = &c;
    // pConst2 = &c2; pConst2 指针为常量，不能再使用另外的内存地址来赋值

    return 0;
}

