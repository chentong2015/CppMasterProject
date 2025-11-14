#include <iostream>

// C++ 构造函数基本特征:
// 1. 构造函数具有与类相同的名称，没有返回值
// 2. 可以定义所需数量的重载构造函数，以各种方式自定义初始化
// 3. 构造函数通常具有公共可访问性，以便类定义或继承层次结构外部的代码可以创建类对象

class Box {
public:
    // 特殊成员函数，不能声明为const或volatile
    // 如果声明了任何非默认构造函数，编译器不会提供默认构造函数
    Box() {}

    // TODO. 首选成员初始化表达式列表，而不是在构造函数主体中赋值
    explicit Box(int i) : m_width(i), m_length(i), m_height(i) {
        // 在构造函数中对成员赋值，将会修改成员声明时的初始值
        this->m_width = i;
        m_length = i;
        Box::m_height = i;
    }

    // 带有默认值的构造函数
    Box(int width, int length, int height = 10) :
        m_width(width), m_length(length), m_height(height) {}

    int Volume() { return m_width * m_length * m_height; }
private:
    int m_width{ 0 };
    int m_length{ 0 };
    int m_height{ 0 };
};




// TODO. 单参数构造函数必须显式标记explicit以避免无意的隐式转换

// TODO. 声明类的实例时，编译器会基于重载决策选择要调用的构造函数
// {} - Uniform initialization (preferred) 推荐使用统一格式的初始化
// () - Function-style notation
int mainTest() {
    Box b; // Calls Box()
    Box b2 {5}; // Calls Box(int)
    Box b3 {5, 8, 12}; // Calls Box(int, int, int)
    Box b4(2, 4, 6); // Calls Box(int, int, int)

    return 0;
}
