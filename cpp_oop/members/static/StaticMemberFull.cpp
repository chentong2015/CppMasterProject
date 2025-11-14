#include <iostream>

using namespace std;

class CMyClass {
public:
    // 普通成员属性可以直接初始化
    int id = 10;

    // TODO. 静态成员属于类型本身, 普通静态成员不能直接初始化
    // Must be defined and initialized outside of class declaration
    static int numStatic;

    // TODO. "常量静态"成员才能直接初始化
    // 声明为const static的数据成员可以有初始化表达式
    const static int value = 10;

    // 实例函数可以访问静态和非静态的成员属性
    void testNonStatic() {
        id = 100;
        numStatic = 101;
    }

    // TODO. static声明类的成员函数，函数不与类的任何实例关联
    // 1. 所有类的对象实例共享该函数
    // 2. 静态函数中不能访问"非静态"的成员属性，不能访问实例成员
    // 3. 调用静态函数不会隐式的传递this指针，除非将实例对象作为参数传递
    static void testStatic(CMyClass* clazz) {
        // id = 100;
        clazz->id = 100;
        numStatic = 10;
    }
};

// TODO. 必须在文件范围内定义静态数据成员并可在此范围内将其初始化
// 这里的静态属性具有全局名称空间的可访问性
int CMyClass::numStatic = 0;

int main() {
    CMyClass myObject1;
    CMyClass myObject2;
    myObject1.numStatic = 1;
    cout << myObject1.numStatic << endl;
    cout << myObject2.numStatic << endl;

    // TODO. 通过全局名称空间访问类型静态成员
    cout << ::CMyClass::numStatic << endl;
    ::CMyClass::testStatic(&myObject1);

    // TODO. 使用类型直接调用静态函数
    CMyClass::testStatic(&myObject1);

    // 通过对象实例调用静态成员函数
    myObject1.testStatic(&myObject1);
    myObject1.testNonStatic();
    cout << myObject1.numStatic << endl;
    cout << myObject2.numStatic << endl;

    return 0;
}