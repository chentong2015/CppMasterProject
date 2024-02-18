#include "SupMonster.h"

SupMonster::SupMonster(int size, int power, const std::string &name) : Monster(size, power, name) {
    std::cout << "Call SupMonster constructor" << std::endl;
}

void SupMonster::testPower() {
   power += 200;
}