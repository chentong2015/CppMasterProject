#include <iostream>
#include "SubMonster.h"
#include "test/NumericInput.h"
// 只需要引入子类header(自动引入父类header)

int mainTest() {
    // 使用auto在new初始化时以避免类型名称重复，通过指针调用方法
    auto subMonster1 = new SubMonster(10, 100, "name");
    subMonster1->makeNoise();
    delete subMonster1;

    // 调用指定构造器创建对象，通过普通对象调用方法
    SubMonster subMonster(10, 100, "name");
    std::string preName = subMonster.setName("new name");
    std::cout << "preName =" + preName << std::endl;
    std::cout << "newName =" + subMonster.getName() << std::endl;
    subMonster.makeNoise();

	// 使用母类指针来指向子类的实例化的对象
    CharInput* input = new NumericInput();
	input->add('1');
	input->add('a');
	input->add('0');
	cout << input->getValue() << endl;
    delete input;
    return 0;
}