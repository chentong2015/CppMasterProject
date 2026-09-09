#include <iostream>

class Demo {
public:
    int count;
    explicit Demo(int count): count(count) {}
};

class Record {
public:
    std::string* pName;
    std::unique_ptr<Demo> pDemo;

    // TODO. make_unique 创建指向特定内存地址的智能指针
    Record(std::string* name, int count) {
        count = 10;
        pName = name;
        // 调用指定类型的含参数构造器，new一个对象
        pDemo = std::make_unique<Demo>(count);
    }

    ~Record() {
        // delete pName; 指向字符串地址的指针不需要删除
    }
};

struct Vec3 {
public:
    int x;
    int y;
    Vec3(int x = 0, int y = 0): x(x), y(y){}
};

int main() {
    std::string value = "test";
    std::string newValue = "new test";
    Record record(&value, 10);
    record.pName = &newValue;
    std::cout << record.pName << std::endl;

    // Use the default constructor. { x=0, y=0 }
    std::unique_ptr<Vec3> v1 = std::make_unique<Vec3>();

    // Use the constructor that matches these arguments. { x=0, y=1 }
    std::unique_ptr<Vec3> v2 = std::make_unique<Vec3>(0, 1);

    // Create a unique_ptr to an array of 5 elements. { x=0, y=0 } ...
    std::unique_ptr<Vec3[]> v3 = std::make_unique<Vec3[]>(5);
    
    return 0;
}
