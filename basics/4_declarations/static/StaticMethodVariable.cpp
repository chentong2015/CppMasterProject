#include <iostream>

using namespace std;

// TODO. static 声明函数中的变量
//  指定的变量将在对该函数的调用中保持其状态，共享执行后的结果
// Value of nStatic is retained between each function call
void showState(int curr) {
    static int nStatic;
    nStatic += curr;
    cout << "nStatic is " << nStatic << endl;
}

int main() {
    for ( int i = 0; i < 5; i++ ) {
        showState(i);
    }
}