#include <iostream>

// TODO. static_cast<type-id>(expression)
// 仅根据表达式中存在的类型，将expression转换为type-id类型
// 1. 可用于将指向基类的指针转换为指向派生类的指针等操作, 此类转换并非始终安全
// 2. 通常使用static_cast转换数值数据类型
// 3. static_cast完全依赖于转换语句提供的信息，因此可能不安全
typedef unsigned char BYTE;

class B {
public:
    virtual void test() {};
};

class D : public B {};

void castStatic(B* pb, D* pd) {
    // Safe conversion, D always contains all of B
    B* pb2 = static_cast<B*>(pd);

    // TODO. 此处pb的static_cast转换不执行运行时检查
    // static_cast会返回指向那个假定的D对象的指针
    // 由于pb指向的对象可能不是D类型的对象，在访问D类型对象的新方法时会异常
    D* pd2 = static_cast<D*>(pb);
    if (pd2 != nullptr) {
        std::cout << "转换之后的pd2非null \n";
    }

    // TODO. 如果pb非指向完整的D类，则dynamic_cast足以判断返回零
    D* pd3 = dynamic_cast<D*>(pb);
    if (pd3 == nullptr) {
        std::cout << "转换之后的pd3为null \n";
    }
}

int mainTest() {
    int i = 65;
    float f = 2.5;
    char ch = static_cast<char>(i);     // int to char
    double dbl = static_cast<double>(f); // float to double
    i = static_cast<BYTE>(ch);

    long val_2 = 0x7FFFFFL;
    int k = static_cast<int>(val_2); // long to int
    std::cout << k;

    B* pb = new B();
    D* pd = new D();
    castStatic(pb, pd);
    delete pb;
    delete pd;
    
    return 0;
}
