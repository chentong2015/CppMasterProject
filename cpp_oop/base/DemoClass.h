#ifndef CPP_MASTER_MONSTER_H
#define CPP_MASTER_MONSTER_H

#include <iostream>

class DemoClass {
// TODO. public 全局公开访问
public:
    // Constructor 默认构造器，特殊成员函数，不能声明为const或volatile
    DemoClass();

    // TODO. 单参数构造函数必须显式标记explicit以避免无意的隐式转换
    explicit DemoClass(const std::string &name);
    DemoClass(int size, int power, const std::string &name);

    // TODO. setter函数的参数名称避免和属性的名称一致
    int getSize() const;
    void setSize(int s);
    const std::string &getName() const;
    std::string setName(const std::string &n);

    // Destructor 析构函数，特殊成员函数，不能声明为const或volatile
    virtual ~DemoClass();

// TODO. 只能在当前类中或它的继承类中访问
protected:
    int power = 100;

// TODO. 只能在当前类中访问到
private:
    int size {1}; // 设置属性的默认初始值
    std::string name {"default"};
};

#endif //CPP_MASTER_MONSTER_H
