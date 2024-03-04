#ifndef CPP_MASTER_MYSTRUCT_H
#define CPP_MASTER_MYSTRUCT_H

#include <iostream>
#include <utility>

struct RGB {
    short r;
    short g;
    short b;
    int v  ;
};

struct MyStruct {
    std::string name;
    float amount;

    // 结构体的构造器形式被废弃
    // Following constructor is no longer needed since C++20.
    MyStruct(std::string name, float amount) : name(std::move(name)), amount(amount) {}
};

struct Vec3 {
public:
    int x;
    int y;
    int z;

    Vec3(int x = 0, int y = 0, int z = 0): x(x), y(y), z(z) {}

    friend std::ostream& operator<<(std::ostream& os, const Vec3& v) {
        return os << "{ x=" << v.x << ", y=" << v.y << ", z=" << v.z << " }";
    }
};

#endif //CPP_MASTER_MYSTRUCT_H
