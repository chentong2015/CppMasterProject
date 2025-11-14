#include <iostream>

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

    // Relational Operators 关系运算符重载
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
};

int main() {
    DemoClass demoClass(1, "name");
    DemoClass demoClass1(2, "name2");

    // 应用自定义重载的操作符(类型的成员函数)
    bool result1 = demoClass == demoClass1;
    bool result2 = demoClass < demoClass1;
    return 0;
}