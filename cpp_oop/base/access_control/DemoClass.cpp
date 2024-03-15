#include <iostream>

class DemoClass {
// TODO. public 全局公开访问
public:
    // TODO. setter函数的参数名称避免和属性的名称一致
    // 添加getter可以保证类型的封装性，不直接在类的外部访问数据
    int getSize() const;
    void setSize(int s);
    const std::string &getName() const;
    std::string setName(const std::string &n);

// TODO. 只能在当前类中或它的继承类中访问
protected:
    int power = 100;

// TODO. 只能在当前类中访问到
private:
    int size {1}; // 设置属性的默认初始值
    std::string name {"default"};
};

int DemoClass::getSize() const {
    return size;
}

void DemoClass::setSize(int s) {
    DemoClass::size = s;
}

const std::string& DemoClass::getName() const {
    return name;
}

// 修改名称时返回之前的旧值
std::string DemoClass::setName(const std::string &n) {
    auto previousName = DemoClass::name;
    DemoClass::name = n;
    return previousName;
}