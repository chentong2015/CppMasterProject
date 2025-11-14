#include <iostream>

// TODO. CPP语言 函数的重载overloading
// 函数可能会重载，它们可能会共享相同的名称，但在形参的数量和/或类型上有所不同
int print(std::string s);            // Print a string.
int print(double dvalue);            // Print a double.
int print(double dvalue, int prec);  // Print a double with a given precision.

// TODO. 判断重载的条件
// 函数声明元素	    是否用于重载？
// 函数返回类型	        否
// 自变量的数量	        是
// 自变量的类型	        是
// 省略号存在或缺失	    是
// typedef 名称的使用	    否
// 未指定的数组边界	    否
// const 或 volatile	是，应用于整个函数时
// 引用限定符（& 和 &&）	是