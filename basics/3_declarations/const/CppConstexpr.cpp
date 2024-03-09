
// C++ constexpr 常数表达式，优先使用constexpr变量定义编译时常量
// 1. 可以应用于函数和类constructor(构造函数)
// 2. constexpr指示值或返回值是constant(常数)
constexpr int size = 10;
constexpr int MeaningValue { 42 };

// TODO. constexpr 函数
//  - constexpr 函数必须只接受并返回文本类型(在编译时能够确定的类型)
//  - constexpr 函数可以是递归的
//  - constexpr 函数主体可以定义为=default或=delete，正文不能包含goto或try块
constexpr float exp(float x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2) {
        exp(x * x, n / 2);
    }
    return exp(x * x, (n - 1) / 2) * x;
}

// TODO. 所有的constexpr变量都是const
//  - const 变量的初始化可以推迟到运行时进行
//  - constexpr 变量必须在编译时进行初始化
int testConstExpr() {
    constexpr float x = 42.0;
    constexpr float y {108};

    // 使用常量函数返回的值来初始常量
    constexpr float z = exp(5, 3);

    // 常量表达式必须在编译时初始化
    // constexpr int i;

    // 常量表达式不能使用非常量进行初始化
    int j = 0;
    // constexpr int k = j + 1;

    return 0;
}