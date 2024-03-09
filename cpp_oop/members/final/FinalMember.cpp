#include <iostream>

// TODO. Final关键字只能作用在虚函数
// Only virtual member functions can be marked 'final'
class UpClass {
public:
    virtual void test() {
        std::cout << "UpClass" << std::endl;
    }
};

class DownClass: public UpClass {
public:
    // 对虚函数的重写，同时标记该函数不能再被重写
    void test() final {
        std::cout << "DownClass" << std::endl;
    }
};

class DownDownClass: public DownClass {
public:
    // 不能重写标记为final的虚函数
    void test() override {
        std::cout << "DownDownClass" << std::endl;
    }
};