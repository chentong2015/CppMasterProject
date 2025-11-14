
// C++ 多重继承/菱形继承的访问控制
//        BaseClass
//  LeftClass   RightClass
//       DerivedClass

class BaseClass {
};

class LeftClass: virtual private BaseClass {
};

class RightClass: virtual public BaseClass {
};

class DerivedClass: public LeftClass, public RightClass {
};

// 虚拟基类的多重继承，编译器会选择允许大多数访问的路径
// RightClass右路径更易于访问
int main() {

    return 0;
}