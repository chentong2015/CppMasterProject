#ifndef CPP_MASTER_TEMPLATECLASS_H
#define CPP_MASTER_TEMPLATECLASS_H

#include <iostream>

// TODO. 模板是C++中的泛型编程的基础
// 1. 类型参数通常使用单个大写字母
// 2. 在泛型特化时(基于CPP内置类型，没有任何wrapper类型)，编译器推导出具体类型参数

// 类型参数的数量没有实际限制, 以逗号分隔
template <class T, class U, class V>
class MyClass {
};

// 关键字typename表示此参数是类型的占位符
template <typename T, typename U, typename V>
class TemplateClass {
public:
    T username;
    U city;
    V value;
};

// 省略号运算符(...)表示零个或多个类型参数的模板
template<typename... Arguments>
class ArgumentsClass {
};

// TODO. 模板支持使用非类型参数，也称为值参数
template<typename T, size_t S, int L>
class MyArray {
    T arr[L];
public:
    MyArray() {
    }
};

// 嵌套模版的定义，推荐使用auto来进行类型推断
template<typename T, template<typename U, int I> class Arr>
class MyClass2 {
    T t; //OK
    Arr<T, 10> a;
    // U u; Error. U not in scope
};

#endif //CPP_MASTER_TEMPLATECLASS_H
