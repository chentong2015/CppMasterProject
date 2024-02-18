#include <iostream>
#include "oop/demo/SubMonster.h"

int main() {
    // 调用指定构造器创建对象
    SubMonster subMonster(10, 100, "name");
    std::string preName = subMonster.setName("new name");
    std::cout << "preName =" + preName << std::endl;
    std::cout << "newName =" + subMonster.getName() << std::endl;

    subMonster.makeNoise();
    return 0;
}

