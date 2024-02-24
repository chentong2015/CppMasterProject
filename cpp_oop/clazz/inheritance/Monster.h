#ifndef CPP_MASTER_MONSTER_H
#define CPP_MASTER_MONSTER_H

#include <iostream>

class Monster {
private:
    // TODO. 默认属性的可访问性为私有
    int size;
    std::string name;

protected:
    // 受保护的属性可以在继承类中访问
    int power = 100;

public:
    // Constructor 默认构造器和自定义的构造器
    Monster();
    // TODO. 单参数构造函数必须显式标记explicit以避免无意的隐式转换
    explicit Monster(const std::string &name);
    Monster(int size, int power, const std::string &name);

    // Destructor
    virtual ~Monster();

    // Getter and Setter
    int getSize() const; // 声明函数返回的类型为常量
    void setSize(int size);
    const std::string &getName() const; // 声明参数和返回类型均为常量
    std::string setName(const std::string &name);

    // Equality Operator 定义类型相等比较器
    bool operator==(const Monster &rhs) const;
    bool operator!=(const Monster &rhs) const;

    // Stream Output Operator
    // friend 友元函数
    friend std::ostream &operator<<(std::ostream &os, const Monster &monster);

    // 虚函数，由子类实现的函数
    virtual void testPower() = 0;
};

#endif //CPP_MASTER_MONSTER_H