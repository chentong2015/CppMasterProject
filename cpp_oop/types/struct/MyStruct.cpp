#include <iostream>

struct RGB {
    short r;
    short g;
    short b;
    int v  ;
};

struct MyS {
    int myInt;
    char myChar;
};

struct MyStruct {
    std::string name;
    float amount;

    // 结构体的构造器形式被废弃
    // Following constructor is no longer needed since C++20.
    MyStruct(std::string name, float amount) : name(std::move(name)), amount(amount) {}
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
}