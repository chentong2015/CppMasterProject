#include <iostream>

// TODO. This 指针
// this 指针不是对象本身的一部分, 也不是对象上sizeof语句结果的一部分
// this 只能在class、struct或union类型的非静态成员函数中访问
// this 指针指向为其调用成员函数的对象

class MyClass {
public:
    // 当对某个对象调用非静态成员函数时，编译器会将该对象的地址作为隐藏参数传递给函数
    // 等效于函数 MyClass setStringValue(MyClass* this, "item");
    // 等效于调用 myClass.setStringValue(&myClass, "value");
    MyClass setStringValue(std::string v) {
        // 直接修改属性
        value = v;
        // 通过this指针修改属性
        this->value = v;
        (*this).value = v;
        // 返回调用成员函数的对象
        return *this;
    }

    // 静态成员函数不具有this指针，不能访问非静态的成员
    static void testStatic() {
        sValue = "static value";
        // this->value = "new";
        // testConstMethod();
    }

    // 等效于传递const MyClass* this指针参数
    // 只读函数无法更改成员数据，也无法调用不是const的成员函数，但可以调用静态函数
    void testConstMethod() const {
        // this->value = "new";
        std::cout << value << std::endl;
        testStatic();
    }

    // 等效于传递volatile myClass * this指针参数
    // 每当访问成员数据时，都会从内存中加载该数据，用于禁用某些优化
    void testVolatileMethod() volatile {
    }

private:
    std::string value;
    static std::string sValue;
};

int main() {
    MyClass myClass;
    myClass.setStringValue("value");
    myClass.testStatic();
    myClass.testConstMethod();
    myClass.testVolatileMethod();

    return 0;
}