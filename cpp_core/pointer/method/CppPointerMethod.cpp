#include <iostream>

class DemoClass {
public:
    const std::string& getName() const {
        return name;
    }

    void setName(std::string& n) {
       this->name = n;
    }
private:
    std::string name;
};

// 传递一个复制的对象，直接传递对象的副本，方法只能修改副本
void testCopyObject(DemoClass demoClass) {
   std::string value = "testCopyObject";
   demoClass.setName(value);
}

// TODO. 优先考虑传递const引用
// const引用是将对象传递给函数的首选方式，除非对象值可能为nullptr
void testCopyAddress(const DemoClass& demoClass) {
    std::string value = "testCopyAddress";
    demoClass.getName();
}

// TODO. 复制对象的地址通常比复制整个对象更加高效
// All copies of the pointer will point to the same modified object.
void testCopyReference(DemoClass* pDc) {
    std::string value = "testCopyReference";
    pDc->setName(value);
}

// TODO. 除非希望函数修改对象，否则请将指针参数指定为const
// 等效于传递const this指针，该方法不能修改传递的对象，也无法调用不是const的成员函数
void testCopyConstReference(const DemoClass* pDc)  {
    // 表明所调用的方法都必须是const的
    std::cout << pDc->getName() << std::endl;

    // 但指针并未标记常量，可以修改其指向的地址
    pDc = new DemoClass();
    delete pDc;
}

int main() {
    std::string str = "name 1";
    DemoClass demoClass;
    demoClass.setName(str);
    std::cout << demoClass.getName() << std::endl;

    testCopyObject(demoClass);
    std::cout << demoClass.getName() << std::endl;

    // 以下两种方式都将修改原始对象
    testCopyAddress(demoClass);
    std::cout << demoClass.getName() << std::endl;
    testCopyReference(&demoClass);
    std::cout << demoClass.getName() << std::endl;

    testCopyConstReference(&demoClass);

    return 0;
}