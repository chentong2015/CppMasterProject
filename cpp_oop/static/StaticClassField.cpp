#include <iostream>

using namespace std;

// TODO. static声明类的数据成员
// 1. 类的所有实例共享该成员的一个副本，静态成员属于类型本身
// 2. 声明为const static的整型数据成员可以有初始化表达式

// TODO. static声明类的成员函数, 函数不与类的任何对象实例关联
// 1. 指定类的所有实例共享该函数
// 2. 静态函数没有隐式this指针，static成员函数不能访问实例成员
class CMyClass {
public:
    // 普通成员属性可以直接初始化
    int id = 10;

    // 非"常量静态"成员不能直接初始化
    static int numStatic;

    // "常量静态"成员才能直接初始化
    const static int value = 10;

    // 实例函数可以访问静态和非静态的成员属性
    void testNonStatic() {
        id = 100;
        numStatic = 101;
    }

    // 静态函数中不能访问"非静态"的成员属性
    // 必须传递实例指针或引用的参数来访问实例成员
    static void testStatic(CMyClass* clazz) {
        // id = 100;
        clazz->id = 100;
        numStatic = 10;
    }
};

// 在外部初始化成员属性的值
int CMyClass::numStatic = 0;

int main() {
    CMyClass myObject1;
    CMyClass myObject2;
    cout << myObject1.numStatic << endl;
    cout << myObject2.numStatic << endl;

    myObject1.numStatic = 1;
    cout << myObject1.numStatic << endl;
    cout << myObject2.numStatic << endl;

    // TODO. 直接通过类型调用静态函数
    CMyClass::testStatic(&myObject1);

    myObject1.testStatic(&myObject1);
    cout << myObject1.numStatic << endl;
    cout << myObject2.numStatic << endl;

    myObject1.testNonStatic();
    cout << myObject1.id << endl;
    cout << myObject2.id << endl;
    cout << myObject1.numStatic << endl;
    cout << myObject2.numStatic << endl;
}