#include <iostream>

using namespace std;

// TODO. static 声明成员函数中的局部变量
// static变量对整个程序可用，该类型的所有实例共享static变量的同一副本
struct C {
    void test(int value) {
        static int var = 0;
        if (var == value) {
            cout << "var == value" << endl;
        } else {
            cout << "var != value" << endl;
        }
        var = value;
    }
};

// TODO. static 声明函数中的变量
// 指定的变量将在对该函数的调用中保持其状态，共享执行后的结果
// Value of nStatic is retained between each function call
void showState(int curr) {
    static int nStatic;
    nStatic += curr;
    cout << "nStatic is " << nStatic << endl;
}

int main() {
    C c1;
    C c2;
    c1.test(100);
    c2.test(100);

    for (int i = 0; i < 5; i++) {
        showState(i);
    }
}