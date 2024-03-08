#include <iostream>

struct MyStruct {
public:
    int value;

    friend std::ostream& operator<<(std::ostream& os, const MyStruct& myStruct) {
        return os << myStruct.value;
    }
};


class DemoClass {
public:
    int num;
    std::string name;

    DemoClass(int num, std::string name) : num(num), name(std::move(name)) {}

    // Equality Operators 相等元算符的重载
    bool operator==(const DemoClass &rhs) const {
        return name == rhs.name && num == rhs.num;
    }

    bool operator!=(const DemoClass &rhs) const {
        return !(rhs == *this);
    }

    // Relational Operators 关系运算符的重载
    // 基于指定属性值的比较，之后的运算符全部基于该比较的结果
    bool operator<(const DemoClass &rhs) const {
        return name < rhs.name && num < rhs.num;
    }

    bool operator>(const DemoClass &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const DemoClass &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const DemoClass &rhs) const {
        return !(*this < rhs);
    }

    // Stream Output Operators 重载<<左移操作符
    // 相当于定义了一个toString()的output输出流
    friend std::ostream &operator<<(std::ostream &os, const DemoClass &aClass) {
        os << "num: " << aClass.num;
        os << "name: " << aClass.name;
        return os;
    }
};

int main() {
    DemoClass demoClass(1, "name");
    DemoClass demoClass1(2, "name2");

    bool result1 = demoClass == demoClass1;
    bool result2 = demoClass < demoClass1;

    // 调用重载的输出流操作符，直接输出对象
    std::cout << demoClass << std::endl;
    return 0;
}