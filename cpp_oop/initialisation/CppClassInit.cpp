#include <iostream>

using namespace std;

class ClassA {
public:
    ClassA() {}
    ClassA(string str): m_string{str} {}
    ClassA(string str, double dbl) : m_string{str}, m_double{ dbl } {}
private:
    double m_double;
    string m_string;
};

class ClassB {
public:
    float m_float;
    string m_string;
    wchar_t m_char;
};

class ClassC {
public:
    ClassC() = delete;
    ClassC(string x): m_string { x } {}
    string m_string;
};

int mainTest() {
    // TODO. 大括号初始化，调用指定的构造器
    ClassA c1{}; // 调用类型的默认构造函数
    ClassA c1_1;
    ClassA c2 {"ww"};
    ClassA c2_1("xx");
    ClassA c3 {"yy", 4.4 }; // 调用非默认构造函数，初始值的设定对应参数顺序
    ClassA c3_1("zz", 5.5);

    ClassB b1{};
    ClassB b2{ 4.5 };
    ClassB b3{ 4.5, "string" };
    ClassB b4{ 4.5, "string", 'c' };
    // ClassB b5{ "string", 'c' }; compiler error
    // ClassB b6{ "string", 'c', 2.0 }; compiler error

    // TODO. 如果默认构造函数被标记delete，则不能再通过大括号进行调用
    ClassC cf{ "hello" };
    // ClassC cf1{};

    // 可以进行初始化的任何位置使用大括号初始化
    ClassC* ptrC = new ClassC {"hello"};
    ptrC->m_string = "new";
    delete ptrC;

    return 0;
}