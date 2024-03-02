#include <iostream>
#include <tuple>
#include <string>

using namespace std;

// CPP 支持Tuple元祖类型: 模版类型，包含任意数量不同类型的数据
//
// template <class ..._Tp>
// class _LIBCPP_TEMPLATE_VIS tuple {
// }

tuple<int, string, double> f() {
    int i { 108 };
    string s { "Some text" };
    double d { .01 };
    //
    return { i,s,d };
}

int main() {
    auto t = f();
    // get() 全局的泛型方法
    // 返回tuple_element结构体变量的数据值
    cout << get<0>(t) << " "
         << get<1>(t) << " "
         << get<2>(t) << endl;

    // 直接将元祖数据设置到对应的变量
    int myVal;
    string myName;
    double myDecimal;
    tie(myVal, myName, myDecimal) = f();
    cout << myVal << " " << myName << " " << myDecimal << endl;

    return 0;
}