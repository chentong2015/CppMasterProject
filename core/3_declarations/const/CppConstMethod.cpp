#include <iostream>
#include <utility>

class Date {
public:
    Date(int mn, std::string name): month(mn), name(std::move(name)) {};

    // A write function: can't be const
    void setMonth(int mn) {
        this->month = mn;
    }

    // TODO. const成员函数是一种只读函数(read-only function)
    // 不能修改成员属性，除非使用const_cast运算符强制转换
    int getMonth() const {
        return month;
    }

    // TODO. const成员函数只能返回值副本
    // - 如果返回地址/引用，会导致外部可能修改当前对象的属性，则该函数便不是一个只读函数
    // - 如果要返回地址/引用，则必须标记返回的数据是const，不可变的数据
    const std::string& getName() const {
        return name;
    }

private:
    int month;
    std::string name;
};

int mainTest() {
    Date date1(12, "name1");
    date1.setMonth( 4 );

    // 常量的对象不能调用setter函数修改成员属性值
    const Date date2(2, "name2");
    date2.getMonth();
    // date2.setMonth(4);

    Date date3(1, "name3");
    std::cout << date3.getName() << std::endl;

    // 通过const_cast<>强制修改const数据
    auto ptr = const_cast<std::string *>(&date3.getName());
    *ptr = "new name3";
    std::cout << *ptr << std::endl;
    std::cout << date3.getName() << std::endl;

    return 0;
}