#include <iostream>
#include <list>

using namespace std;

// typeid 运算符允许在运行时确定对象的类型
// typeid 运算结果为type_info对象的引用const type_info&
// typeid 运算符在应用于多态类类型的 lvalue 时执行运行时检查

// typeid 也可以在模板中使用，以确定模板参数的类型
template <typename T>
T max( T arg1, T arg2 ) {
    cout << typeid(T).name() << "s compared." << endl;
    return (arg1 > arg2 ? arg1 : arg2);
}

class Base {
public:
    virtual void vFunc() {}
};

class Derived : public Base {};

int mainTest() {
    Derived* pd = new Derived;
    Base* pb = pd;

    // typeid(expression) expression 必须指向多态类型(具有虚函数的类)
    std::cout << typeid(pb).name() << std::endl;   //prints "class Base *"
    std::cout << typeid(*pb).name() << std::endl;  //prints "class Derived"
    std::cout << typeid(pd).name() << std::endl;   //prints "class Derived *"
    std::cout << typeid(*pd).name() << std::endl;  //prints "class Derived"
    delete pd;
    return 0;
}