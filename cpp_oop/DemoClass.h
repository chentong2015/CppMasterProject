#ifndef CPP_MASTER_MONSTER_H
#define CPP_MASTER_MONSTER_H

#include <iostream>

// TODO. 默认属性的可访问性为私有
// - private 只能在当前类定义中访问到
// - protected 只能在当前类中或它的继承类中访问
// - pubic 全局公开访问
class DemoClass {
private:
    int size;
    std::string name;

protected:
    int power = 100;

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
};

#endif //CPP_MASTER_MONSTER_H
