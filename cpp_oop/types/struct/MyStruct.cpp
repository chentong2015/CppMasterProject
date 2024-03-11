#include <iostream>

// TODO. 结构体的成员默认为public
struct MyS {
    int myInt;
    char myChar;
};

// 结构体的构造器形式被废弃
struct MyStruct {
    std::string name;
    float amount;
    // Following constructor is no longer needed since C++20.
    MyStruct(std::string name, float amount) : name(std::move(name)), amount(amount) {}
};

// TODO. 泛型结构体，在使用该结构体类型时必须提供特化类型和size
template <class Tp, size_t size>
struct MyArrayStruct {
    Tp elems[size];
};

int main() {
    // TODO. 可以初始化结构体的任意数据，未初始化则使用默认值
    MyS ms1{ 'a' };               // myInt = 97, myChar = '\0'
    MyS ms2{ 1 };                 // myInt = 1, myChar = '\0'
    MyS ms3{};                          // myInt = 0, myChar = '\0'
    MyS ms4{1, 'a'};      // myInt = 1, myChar = 'a'
    MyS ms5 = { 2, 'b' }; // myInt = 2, myChar = 'b'

    std::vector<MyStruct> vectorMyStruct;
    vectorMyStruct.push_back({"Norah", 2.7});
    vectorMyStruct.push_back({"Frank", 3.5});

    MyArrayStruct<int, 10> myArrayStruct;
}