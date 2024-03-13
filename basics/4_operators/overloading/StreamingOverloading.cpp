#include <iostream>

// TODO. 对于Streaming Operator的重载，推荐使用friend友元函数
// operator << output
// operator >> input

class MyClass {
public:
    // TODO. 类型成员的操作符重载只接收两个参数，其中包含隐式参数this*
    std::ostream& operator<<(std::ostream &os) {
      os << "name: " << this->name << std::endl;
      return os;
    }
private:
    std::string name {"name"};
};


class DemoClass {
    // friend 友元函数不是类型的成员函数，由外部实现
    // 但友元函数具有成员级访问权限，能够访问类型的私有数据
    friend std::ostream& operator<<(std::ostream &os, const DemoClass& demoClass);
private:
    std::string name {"name"};
};

// <<左移操作符真正实现，相当于定义了toString()输出流
std::ostream& operator<<(std::ostream &os, const DemoClass& demoClass){
    return os << demoClass.name << std::endl;
}


int main() {
    MyClass myClass;
    // 调用自定义的重载操作符(等效于调成员函数)
    myClass << std::cout;
    myClass<<(std::cout);

    // 调用ostream输出流的自定义操作符，输出流接收DemoClass实例对象作为参数(操作符右侧)
    DemoClass demoClass;
    std::cout << demoClass << std::endl;
    return 0;
}