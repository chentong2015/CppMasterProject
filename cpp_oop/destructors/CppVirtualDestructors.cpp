#include <iostream>

// TODO. 对于抽象类型需要提供虚析构器，以便提供多态性
// 由于抽象类型无法创建实例对象，因此调用它的析构器没有多大意义
class UpClass {
public:
    virtual void test() = 0;

    virtual ~UpClass() {
        std::cout << "UpClass destructor" << std::endl;
    }
};

class DownClass: public UpClass {
public:
    void test() {
        std::cout << "test" << std::endl;
    }

    ~DownClass() override {
        std::cout << "DownClass destructor" << std::endl;
    }
};

int main() {
    // 虚析构器具有多态性性，会调用指针指向类型对象上的析构器
    UpClass* upClass = new DownClass();
    upClass->test();
    delete upClass;

    DownClass downClass;
    downClass.test();

    return 0;
}