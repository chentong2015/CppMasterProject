#include <iostream>

// TODO. 友元函数的特征
// friend 函数是一个不为类成员的函数，但它可以访问类的私有和受保护的成员
// friend 函数不被视为类成员，它们是获得了特殊访问权限的普通外部函数
// friend 不在类的范围内，通常不能使用成员选择运算符(.和->)调用它们
// friend 函数不受访问控制关键字的影响，可以声明在任意位置
// friend 声明中声明的函数被视为已使用extern关键字声明

class ForwardDeclared;

class FriendClass {
public:
    // 要声明为友元的函数找不到提前的定义
    // friend int ForwardDeclared::IsAFriend();
};

class Point {
    // friend 函数可以访问其接受为参数的Point对象的私有数据成员
    friend void changePrivate(Point &);
public:
    Point() : num(0) {}

    void printPrivate() const {
        std::cout << num << std::endl;
    }
private:
    int num;
};

// 外部普通函数的具体实现
void changePrivate(Point& point) {
   point.num++;
}

int main() {
    Point point;
    point.printPrivate();

    changePrivate(point);
    point.printPrivate();
    return 0;
}