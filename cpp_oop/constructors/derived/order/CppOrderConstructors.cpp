#include <iostream>

class Box {
public:
    Box(int width){
        m_width = width;
    }
private:
    int m_width;
};

// TODO. 派生类构造函数始终调用基类构造函数
class StorageBox : public Box {
public:
    // 如果基类没有默认构造函数，则必须在派生类构造函数中提供基类构造函数参数
    StorageBox(int width, const std::string& label): Box(width) {
        m_label = label;
    }
private:
    std::string m_label;
};

int main(){
    const std::string aLabel = "aLabel";
    StorageBox sb(10, aLabel);
    return 0;
}