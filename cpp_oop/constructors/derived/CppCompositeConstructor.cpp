#include <iostream>
#include <utility>

using namespace std;

class Box {
public:
    Box(int width, int length, int height){
        m_width = width;
        m_length = length;
        m_height = height;
    }
private:
    int m_width;
    int m_length;
    int m_height;
};

class Label {
public:
    Label(const string& name, const string& address) {
        m_name = name;
        m_address = address;
    }
    string m_name;
    string m_address;
};

// 包含类类型成员的类称为"复合类", 先调用被包含类型的构造函数进行初始化
class StorageBox : public Box {
public:
    StorageBox(int width, int length, int height, Label label):
        Box(width, length, height), m_label(std::move(label)) {}
private:
    Label m_label;
};

int mainTest(){
    // passing a named Label
    Label label1{ "name", "address" };
    StorageBox sb1(1, 2, 3, label1);

    // passing a temporary label
    StorageBox sb2(3, 4, 5, Label { "name", "address" });

    // passing a temporary label as an initializer list
    StorageBox sb3(1, 2, 3, {"name", "address"});
    return 0;
}