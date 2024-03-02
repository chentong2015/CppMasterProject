// C++ constexpr 常数表达式
// 1. 可以应用于函数和类 constructor(构造函数)
// 2. constexpr指示值或返回值是 constant(常数)

// TODO. constexpr 函数
//  - constexpr 函数必须只接受并返回文本类型(在编译时能够确定的类型)
//  - constexpr 函数可以是递归的
//  - 主体可以定义为 = default 或 = delete
//  - 正文不能包含如何 goto 语句或 try 块
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