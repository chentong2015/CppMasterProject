#include <iostream>

using namespace std;

// TODO. 对象的Copy拷贝: 复制构造函数+复制赋值运算符
// 将复制构造函数定义为已删除(=delete)来阻止复制对象
class Box {
public:
    Box();
    
    // Avoid: allows modification of other
    // 可能通过地址修改被用来拷贝的对象
    Box(Box& other);

    // TODO. 复制构造函数
    Box(const Box& other);
    Box(volatile Box& other);
    Box(volatile const Box& other);

    // Additional parameters OK if they have default values
    Box(Box& other, int i = 42, string label = "Box");

    // TODO. 定义复制构造函数时，还应定义复制赋值运算符(=)
    Box& operator=(const Box &);
};

int mainTest() {
    Box box1;
    // Box box2(box1);
    return 0;
}
