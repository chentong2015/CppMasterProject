#ifndef CPP_MASTER_MYSTRUCT_H
#define CPP_MASTER_MYSTRUCT_H

#include <iostream>
#include <utility>

// TODO. struct 关键字定义结构类型和/或结构类型的变量
// 将不同的数据类型包装到一个自定义的变量类型中

struct RGB {
    short r;
    short g;
    short b;
    int v  ;
};

struct MyStruct {
    std::string name;
    float amount;

    // 结构体和class相似的构造器
    MyStruct(std::string name, float amount) : name(std::move(name)), amount(amount) {}
};

struct Vec3 {
public:
    // 支持设置构造参数的默认值
    // Following constructor is no longer needed since C++20.
    Vec3(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}

    friend std::ostream& operator<<(std::ostream& os, const Vec3& v) {
        return os << "{ x=" << v.x << ", y=" << v.y << ", z=" << v.z << " }";
    }
private:
    int x;
    int y;
    int z;
};

#endif //CPP_MASTER_MYSTRUCT_H
