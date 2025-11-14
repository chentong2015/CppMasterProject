#include <iostream>

using namespace std;
class CCTest {
public:
    void setNumber(int num) {
        number = num;
    }

    // const_cast<> 删除某个类上的const属性
    // const_cast<> 将const CCTest*类型更改为CCTest*以允许修改成员
    void printNumber() const {
        auto ptr = const_cast<CCTest *>(this);
        ptr->number--;
    }
private:
    int number;
};

int main() {
    const std::string value = "test";
    const std::string* ptr = &value;
    // *ptr = "new test";

    // const_cast<> 将常量数据修改非常量数据，以便通过指针修改
    auto ptr1 = const_cast<std::string*>(&value);
    *ptr1 = "new test";
    std::cout << value << std::endl;
    std::cout << *ptr1 << std::endl;

    CCTest X {};
    X.setNumber( 8 );
    X.printNumber();
}