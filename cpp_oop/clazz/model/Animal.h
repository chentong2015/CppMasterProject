#ifndef JDK_JVM_MASTER_ANIMAL_H
#define JDK_JVM_MASTER_ANIMAL_H

#include <string>
#include <iostream>

class Animal {

public:
    std::string str_name;
public:
    // 构造函数
    Animal();
    Animal(std::string name);

    // 虚函数，能够被重写
    virtual void eat();
    // 这里的纯虚函数需要被实现
    virtual void move()=0;

    // 析构函数，内存清理
    virtual ~Animal();
};

#endif //JDK_JVM_MASTER_ANIMAL_H
