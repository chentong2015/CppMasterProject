
// TODO. extern使用场景
// 在某些情况下，可能需要在.cpp文件中声明全局变量或类
// 在这些情况下，需要一种方法来告知编译器和链接器名称所具有的链接类型

// extern应用于全局变量、函数或模板声明
// extern指定符号具有external链接
extern const int valueSource = 42;

// declaration and definition
// 只需要声明和定义一次全局变量
extern int i = 42;

