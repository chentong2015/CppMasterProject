#include <iostream>
#include "inheritance/head/SubMonster.h"

int main() {
    // 调用指定构造器创建对象，通过普通对象调用方法
    SubMonster subMonster(10, 100, "name");
    std::string preName = subMonster.setName("new name");
    std::cout << "preName =" + preName << std::endl;
    std::cout << "newName =" + subMonster.getName() << std::endl;
    subMonster.makeNoise();
}