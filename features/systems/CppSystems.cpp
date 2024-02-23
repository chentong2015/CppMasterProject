#include <iostream>
#include <cstdlib>

using namespace std;

// 调用system()函数执行系统相关的指令
int main() {
    // Try command from your Linux / Mac machine
    int ret = system("touch test.txt");
    cout << ret;

    // system("pause") command is only available in Windows Systems.
    // system("pause");
    return 0;
}
