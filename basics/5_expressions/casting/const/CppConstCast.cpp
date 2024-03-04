#include <iostream>

using namespace std;
class CCTest {
public:
    void setNumber( int );
    // 标记const的函数是只读函数
    void printNumber() const;
private:
    int number;
};

void CCTest::setNumber( int num ) { number = num; }

// this 指针的数据类型为 const CCTest *
// const_cast 运算符会将this指针的数据类型更改为 CCTest *，以允许修改成员
void CCTest::printNumber() const {
    cout << "\nBefore: " << number;
    const_cast<CCTest *>(this)->number--;
    cout << "\nAfter: " << number;
}

int main() {
    CCTest X;
    X.setNumber( 8 );
    X.printNumber();
}