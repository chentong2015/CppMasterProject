#include <iostream>

// switch case 中的case标签
void testSwitch(int value) {
    switch(value) {
        case 10:
            std::cout << "case 10";
            break;
        case 20:
            std::cout << "case 20";
            break;
        default:
            std::cout << "default";
            break;
    }
}