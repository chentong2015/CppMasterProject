#include <iostream>
#include "MyStruct.h"

// 将值封装在结构对象中，从函数返回多个值
struct S {
    std::string name;
    int num;
};

S g() {
    std::string t { "hello" };
    int u { 42 };
    return { t, u };
}

int main() {
    // 创建结构体类型的数据
    MyStruct myStruct {"name", 100};
    std::vector<MyStruct> vectorMyStruct;
    vectorMyStruct.push_back({"Norah", 2.7});
    vectorMyStruct.push_back({"Frank", 3.5});

    // Use the default constructor.
    std::unique_ptr<Vec3> v1 = std::make_unique<Vec3>();

    // Use the constructor that matches these arguments.
    std::unique_ptr<Vec3> v2 = std::make_unique<Vec3>(0, 1, 2);

    // Create a unique_ptr to an array of 5 elements.
    std::unique_ptr<Vec3[]> v3 = std::make_unique<Vec3[]>(5);

    std::cout << "make_unique<Vec3>():      " << *v1 << '\n'
              << "make_unique<Vec3>(0,1,2): " << *v2 << '\n'
              << "make_unique<Vec3[]>(5):   ";
}