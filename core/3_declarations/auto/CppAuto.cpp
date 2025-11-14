#include <iostream>
#include <vector>

void testAutoBasicTypes() {
    // TODO. 推荐使用auto类型推导，避免类型名称重复
    auto name = "char"; // Declare a variable and let compiler deduce the type.

    // 必须提供初始化的数据才能由编译器进行推导(C++ 11)
    // auto address;             // Error. Compiler cannot deduce a type without an init value.
    // age = 12;                 // Error. Variable declaration must specify a type or use auto!
    // result = "Kenny G.";      // Error. Can't assign text to an int.

    // 自动根据初始的数据推导合适类型
    auto x = 4;
    auto y = 3.37;
    auto z = 3.37f;
    auto c = 'a';
    auto ptr = &x;
    auto pptr = &ptr; //pointer to a pointer
    std::cout << typeid(x).name() << std::endl
              << typeid(y).name() << std::endl
              << typeid(z).name() << std::endl
              << typeid(c).name() << std::endl
              << typeid(ptr).name() << std::endl
              << typeid(pptr).name() << std::endl;
}

int mainTest() {
    // TODO. 在auto推导类型的基础上修改
    auto value = "test";  // const char*

    const char charArray[] = "1234";
    auto& pCA = charArray;
    std::cout << typeid(pCA).name() << std::endl; // A5_c: address of 5 char array

    auto& value1 = "test"; // 等效于取字符数据的地址
    std::cout << typeid(value1).name() << std::endl;  // A5_c: address of 5 char array


    // TODO. 通过reference地址来进行遍历，而非拷贝数据
    std::string str = "value";
    for (auto& s : str) {
        std::cout << s << std::endl;
    }
    std::vector<std::string> v1 = {"item1", "item3"};
    for(auto& num : v1) {
        std::cout << num << std::endl;
    }
    
    return 0;
}
