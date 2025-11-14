
// 匿名 union: 在没有class-name或 declarator-list的情况下声明
// union { member-list }

struct MyStruct {
    int id;

    // 可以直接通过外部名称来使用union中声明的名称
    union {
        // 匿名union中声明的名称必须在周边范围中唯一
        // 匿名union中只能有public成员 !!
        float value;
        short count;

        // 匿名union中不能具有成员函数 !!
        // void test() {}
    };
};

namespace MyNamespace {
    class MyClass {
    };

    // 如果在命名空间范围内声明，必须将其声明为static
    static union {
        int id;
        float value;
    };
}

int mainTest() {
    MyStruct myStruct;
    myStruct.id = 10;
    myStruct.value = 10.5;
    myStruct.count = 1;

    MyNamespace::value = 10.0;
    return 0;
}

