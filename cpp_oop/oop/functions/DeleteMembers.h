#ifndef CPP_MASTER_DELETEMEMBERFUNCTIONS_H
#define CPP_MASTER_DELETEMEMBERFUNCTIONS_H

// TODO. 声明不可复制的类型的传统形式，通过隐藏特殊构造器和赋值操作符来实现
// 1. 因为它进行了完全声明，所以会阻止自动生成默认构造函数
// 2. 即使显式定义的默认构造函数不执行任何操作，编译器仍将对其处理
// 3. 尽管对外部代码隐藏，但成员函数和noncopyable的友元仍可以看见并调用
struct noncopyable {
    noncopyable() {};
private:
    noncopyable(const noncopyable&);
    noncopyable& operator=(const noncopyable&);
};

// TODO. Delete直接删除函数
// 可以删除特殊成员函数和普通成员函数以及非成员函数，以阻止定义或调用它们
// 阻止编译器生成不需要的特殊成员函数，必须在声明函数时将其删除
struct NonCopyable {
    NonCopyable() =default;

    // 删除特殊的成员函数，使得该结构体的对象不能直接copy拷贝
    NonCopyable(const NonCopyable&) =delete;
    NonCopyable& operator=(const NonCopyable&) =delete;
};

class NonCopyableClass {
    NonCopyableClass() = default;

    NonCopyableClass(const NonCopyableClass&) = delete;
    NonCopyableClass& operator=(const NonCopyableClass&) = delete;
};

#endif //CPP_MASTER_DELETEMEMBERFUNCTIONS_H
