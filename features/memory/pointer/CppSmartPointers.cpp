#include <memory>

// 1. 对于没有在堆内存存储数据的对象，会自动销毁和回收资源
// lifetime automatically tied to enclosing scope
// automatic destruction and de-allocation for w and w.g
class Widget1 {
public:
    void draw();
};

// 2. 对于在堆内存有存储数据的对象，自定义析构器进行释放
class Widget2 {
private:
    int* data;
public:
    Widget2(const int size) { data = new int[size]; } // acquire
    ~Widget2() { delete[] data; } // release
    void do_something() {}
};

// TODO. C++11之后使用智能指针来避免指针的内存泄漏
// 智能指针可处理对其拥有的内存的分配和删除, 不需要在Widget类中显式析构函数
class Widget3 {
private:
    std::unique_ptr<int[]> data;
public:
    Widget3(const int size) { data = std::make_unique<int[]>(size); }
    void do_something() {}
};


int main() {
    Widget1 w1;
    w1.draw();

    Widget2 w2(1000000);
    w2.do_something();

    Widget3 w3(1000000);
    w3.do_something();
    return 0;
}
