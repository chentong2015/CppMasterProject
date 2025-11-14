
// bad_cast 由于强制转换失败而造成的异常
// class bad_cast : public exception

#include <typeinfo>
#include <iostream>

using namespace std;

class Shape {
public:
    virtual void virtualFunc() const {}
};

class Circle: public Shape {
public:
    virtual void virtualFunc() const {}
};

int main() {
    Shape shape_instance;
    Shape& ref_shape = shape_instance;
    try {
        // 向下转换失败，抛出特定的异常
        Circle& ref_circle = dynamic_cast<Circle&>(ref_shape);
    } catch (bad_cast b) {
        cout << "Caught: " << b.what();
    }
}