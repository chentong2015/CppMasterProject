#include <iostream>

// 编译器自动为类型添加non-virtual destructor
// 编译器可以标记成=default使用默认实现
class UpClass {
public:
    ~UpClass() {
        std::cout << "UpClass destructor" << std::endl;
    }
};

// TODO. 当子类的析构器被调用时，先执行子类的析构器然后执行父类的
class DownClass: public UpClass {
public:
    void test() {
        std::cout << "test" << std::endl;
    }
    ~DownClass() {
        std::cout << "DownClass destructor" << std::endl;
    }
};

// TODO. 析构器的调用时机
// 1. delete ptr
// 2. 不再使用，函数返回
int main() {
    // 非虚析构器并没有多态性，因此只会调用到指针类型的析构器
    UpClass* upClass = new DownClass();
    delete upClass;

    // 在类型使用接收后(函数返回)，会自动调用对象类型的析构器
    DownClass downClass;
    downClass.test();

    return 0;
}