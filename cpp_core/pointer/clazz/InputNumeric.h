#include "InputChar.h"
#include <iostream>

class NumericInput : public CharInput {

public:
    // Override 重写父类的虚函数
	void add(char c) override {
		if (isdigit(c)) {
			character += c;
		}
	}
};