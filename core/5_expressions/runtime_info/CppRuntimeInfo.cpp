
// RTTI: 类似反射机制
// 运行时类型信息是一种允许在程序执行过程中确定对象的类型的机制
//
// typeid 运算符：用于标识对象的确切类型
// type_info 类:
//   用于保留由typeid运算符返回的类型信息
//   必须包含<typeinfo> 头文件才能使用 type_info 类

#include <iostream>
#include <typeinfo>

class Base {
public:
    virtual void vFunc() {}
};
class Derived : public Base {};

using namespace std;

int main() {
    Derived* pd = new Derived();
    Base* pb = pd;
    cout << typeid(pb).name() << endl;   //prints "class Base *"
    cout << typeid(*pb).name() << endl;  //prints "class Derived"
    cout << typeid(pd).name() << endl;   //prints "class Derived *"
    cout << typeid(*pd).name() << endl;  //prints "class Derived"
    delete pd; // 只需要释放一个指针
    
    return 0;
}
