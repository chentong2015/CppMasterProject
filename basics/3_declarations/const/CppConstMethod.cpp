
class Date {
public:
    explicit Date(int mn);
    int getMonth() const;   // A read-only function
    void setMonth(int mn);  // A write function; can't be const
private:
    int month {};
};

Date::Date(int mn): month(mn) {}

// TODO. const成员函数，只读函数不能修改成员属性
// 除非使用const_cast运算符强制转换后修改
int Date::getMonth() const {
    return month;
}

// Modifies data member
void Date::setMonth(int mn) {
    month = mn;
}

int main() {
    Date MyDate(12);
    MyDate.setMonth( 4 );

    // 常量的对象不能调用setter函数修改成员属性值
    const Date BirthDate(2);
    BirthDate.getMonth();
    // BirthDate.setMonth(4);
}