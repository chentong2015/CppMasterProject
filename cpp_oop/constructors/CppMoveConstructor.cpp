#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Box {
public:
    Box() {
        std::cout << "default" << std::endl;
    }

    Box(int width, int height, int length): m_width(width), m_height(height), m_length(length) {
        std::cout << "int, int, int" << std::endl;
    }

    Box(Box& other): m_width(other.m_width), m_height(other.m_height), m_length(other.m_length) {
        std::cout << "copy" << std::endl;
    }

    // TODO. Move Constructor 移动构造器
    // 它采用rvalue引用作为其第一个参数，以后的任何参数都必须具有默认值
    // 它在传递大型对象时可以显著提高程序的效率
    Box(Box&& other) noexcept : m_width(other.m_width), m_height(other.m_height), m_length(other.m_length) {
        // "窃取"另一个对象的contents大型字符串向量，使其属于当前新对象
        m_contents = std::move(other.m_contents);
        std::cout << "move" << std::endl;
    }

    int getVolume() const {
        return m_width * m_height * m_length;
    }

    void addItem(string item) {
        m_contents.push_back(item);
    }

    void printContents() {
        for (const auto& item : m_contents) {
            cout << item << " ";
        }
    }
private:
    int m_width{ 0 };
    int m_height{ 0 };
    int m_length{ 0 };
    vector<string> m_contents;
};

// 该函数返回值是xvalue(过期值)，它未分配给任何变量，因此即将超出范围
Box createBox() {
    Box b(5, 10, 18); // "int,int,int"
    b.addItem("item 1");
    b.addItem("item 2");
    b.addItem("item 3");
    return b;
}

int mainTest() {
    Box b; // "default"
    Box b1(b); // "copy"
    std::cout << b1.getVolume() << std::endl;

    // 传递的是即将过期的对象，且其包含大型数据
    // 优先考虑使用移动构造器来转移数据，提高传递的效率
    Box b2(createBox()); // "move"
    b2.printContents();
    return 0;
}