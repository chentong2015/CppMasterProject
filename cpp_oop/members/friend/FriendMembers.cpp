#include <iostream>

// TODO. friend 友元函数或者友元类
// 类向"不属于类成员的函数"或"单独类的所有成员"授予成员级访问权限



class ForwardDeclared; // Class name is known.

class HasFriends {
    // friend int ForwardDeclared::IsAFriend();   // C2039 error expected
};



class FriendClass {
public:
    // 重载<<操作符时必须添加friend关键字
    friend std::ostream& operator<<(std::ostream& os, const FriendClass& object) {
        return os << object.name << std::ostream::end;
    }
private:
    std::string name;
};


int main() {

    return 0;
}