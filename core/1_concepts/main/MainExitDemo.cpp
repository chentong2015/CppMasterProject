#include <iostream>

class ShowData {
public:
    ShowData(std::string name): name(name) {
        std::cout << "call constructor " + name << std::endl;
    }

    void write(std::string str) {
        std::cout << "write: " + str;
    }

    // 析构器用于关闭io和消耗占用内存资源
    ~ShowData() {
        std::cout << "call destructor: " + name << std::endl;
    }
private:
    std::string name;
};

// 创建两个静态对象
// ShowData showData("object");
// ShowData showData1("object1");

int main() {
    // 自动变量
    ShowData showData("object");
    ShowData showData1("object1");

    showData.write("hello to default device\n");
    showData1.write("hello to file hello.dat\n");

    // exit(0); 使用exit退出将不会调用析构函数

    // 使用return返回将自动调用析构函数，销毁任何自动变量
    // 按与初始化相反的顺序销毁静态对象
    return 0;
}