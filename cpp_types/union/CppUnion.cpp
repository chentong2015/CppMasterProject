#include <iostream>

// TODO. union类型不能有基类
union MyUnion {
    int my_int;
    char my_char;
    bool my_bool;
};

// Union联合类型中可以使用多种基础值类型
union MyFullUnion {
    char   ch;
    int    i;
    long   l;
    float  f;
    double d;
    int *int_ptr;
};

// TODO. 不推荐在Union类型定义中使用string数据
// string具有特殊的构造和析构方法，会导致Union类型的隐式构造器被删除，必须自定义创建
// Variant field 'name' has a non-trivial default constructor
// Variant field 'name' has a non-trivial default destructors
union UnionString {
    int count;
    std::string name;

    explicit UnionString(std::string& n) {
        name = n;
    }

    ~UnionString() {};
};

int main() {
    // TODO. 使用Union联合类型的默认构造器进行初始化
    MyUnion mu1{ 'a' }; // my_int = 97, my_char = 'a', my_bool = true, {myInt = 97, myChar = '\0'}
    MyUnion mu2{ 1 };   // my_int = 1, my_char = 'x1', my_bool = true, {myInt = 1, myChar = '\0'}
    MyUnion mu3{};             // my_int = 0, my_char = '\0', my_bool = false, {myInt = 0, myChar = '\0'}
    MyUnion mu4 = mu3;         // my_int = 0, my_char = '\0', my_bool = false, {myInt = 0, myChar = '\0'}

    // TODO. Union数据类型指定初始化其中一个数据
    // MyUnion mu5{1, 'a', true}; // compiler error: C2078: too many initializers
    // MyUnion mu6 = 'a';         // compiler error: C2440: cannot convert from 'char' to 'MyUnion'
    // MyUnion mu7 = 1;           // compiler error: C2440: cannot convert from 'int' to 'MyUnion'

    std::string value = "test";
    auto pRecordUnion = new UnionString(value);
    pRecordUnion->name = "new";
    pRecordUnion->count = 5;    // union holds an int
    delete pRecordUnion;
}
