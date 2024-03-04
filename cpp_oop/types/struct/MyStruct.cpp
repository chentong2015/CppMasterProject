#include <iostream>
#include "MyStruct.h"

struct MyS {
    int myInt;
    char myChar;
};

int main() {
    // 结构体可以任意执行数据进行初始化，未初始化则使用默认值
    MyS ms1{ 'a' };               // myInt = 97, myChar = '\0'
    MyS ms2{ 1 };                 // myInt = 1, myChar = '\0'
    MyS ms3{};                          // myInt = 0, myChar = '\0'
    MyS ms4{1, 'a'};      // myInt = 1, myChar = 'a'
    MyS ms5 = { 2, 'b' }; // myInt = 2, myChar = 'b'

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