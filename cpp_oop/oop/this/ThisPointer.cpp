#include <iostream>

// TODO. This 指针
// this 指针只能在class、struct或union类型的非静态成员函数中访问
// this 指针指向为其调用成员函数的对象，非静态成员函数不具有this指针
class ThisPointer {

public:
    // 对象的this指针不是对象本身的一部分
    // 当对某个对象调用非静态成员函数时，编译器会将该对象的地址作为隐藏的参数传递给函数
    // 等效于调用方法 setStringValue( &thisPointer, "item");
    ThisPointer setStringValue(std::string v) {
        value = v;

        // 在非静态方法中使用this指针访问类型成员
        this->value = v;
        (*this).value = v;

        // *this 用于返回成员函数所在的当前对象
        return *this;
    }

private:
    std::string value;
};