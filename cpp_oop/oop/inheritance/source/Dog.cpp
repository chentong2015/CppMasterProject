#include <iostream>
#include "../head/Dog.h"

using namespace std;

Dog::Dog() {
    cout << "Dog creation without name" << endl;
};

Dog::Dog(string name, string subname) {
    // 使用公有继承来的成员属性
    str_name = name;
    sub_name = subname;
    cout << "Dog creation with name" << endl;
}

Dog::~Dog() {
    cout << "~Dog" << endl;
}

void Dog::move() {
    cout << "Dog: " << sub_name << " is moving" << endl;
}