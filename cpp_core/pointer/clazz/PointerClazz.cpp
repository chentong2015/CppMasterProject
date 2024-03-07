#include <iostream>

class MyClass {
public:
    std::string name;

    MyClass() = default;
    explicit MyClass(std::string name) : name(std::move(name)) {}

    void setName(const std::string& n) {
        this->name = n;
    }

    void print() const {
        std::cout << name << std::endl;
    }
};

// 指向class类实例的指针的四种操作
int main() {
    auto pointerMc = new MyClass("name 1"); // Allocate object on the heap
    std::cout << pointerMc << std::endl; // 指针的值为16进制地址0x6000000b9240
    std::cout << sizeof pointerMc << std::endl; // 指针的大小为8 bytes

    pointerMc->print();                  // 1. Access class member
    (*pointerMc).print();                // 拿到指针所指向对象，通过实例调用方法

    MyClass* pointerMc2 = pointerMc;     // 2. Copy the pointer 两个指针指向同一个对象
    pointerMc2->setName("name 2");     // 通过指针修改的也是同一个对象
    pointerMc->print();
    pointerMc2->print();

    MyClass object = *pointerMc;         // 3. Copy the pointed-to object 复制指针指向的对象
    object.setName("name 3");          // 对于对象的修改相互独立，两个对象存储在不同位置
    pointerMc->print();
    object.print();

    MyClass** ppMc = &pointerMc;         // 4. Points to pointer 指向指针的指针
    std::cout << *ppMc << std::endl;     // 指针的值为存储地址0x60000138d240
    delete pointerMc;

    return 0;
}