#include <iostream>
#include "../head/SubMonster.h"

// 创建对象时必须先调用父类构造器
SubMonster::SubMonster(int size, int power, const std::string &name) : Monster(size, power, name) {
    std::cout << "Call SubMonster constructor" << std::endl;
}

// 定义虚函数的实现
void SubMonster::testPower() {
    power += 100;
}

void SubMonster::lostPower() {
    const auto increment = getIncrement();
    if (increment > 50) {
        power -= 30;
    }
}

int SubMonster::getIncrement() const { return power + 10;}

void SubMonster::makeNoise() {
     std::cout << "Make noise" << std::endl;
}
