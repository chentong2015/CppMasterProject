#include <iostream>

class UpClass {
public:
   explicit UpClass(std::string& name): name(name) {};
private:
    std::string name;
};

class DownClass: public UpClass {
public:
    // 先调用父类的构造器，再调用子类的构造器
    DownClass(std::string& name, int n): num(n), UpClass(name) {
        num = n;
    }
private:
    int num;
};

int main() {
    std::string value = "test";
    DownClass downClass(value, 10);

    return 0;
}
