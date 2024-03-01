#include <iostream>

using namespace std;

// TODO. If条件语句的判断condition为true或者非零值:
// - 非 null 指针
// - 任何非零算术值，或一种类类型，用于定义对算术、布尔值或指针类型的明确转换

// if-branch或else-branch分支中可以包含break、continue或goto跳转
// else语句和最接近的上一个if语句相关联
int main() {
    int x = 10;
    if (x < 11) {
        cout << "x < 11 is true!\n";
    } else {
        cout << "x < 11 is false!\n";
    }

    bool flag = false;
    if (flag == true) {
        x = 100;
    }

    int *p = new int(25);
    if (p) {
        // 非null指针会执行if条件
        cout << *p << "\n";
    } else {
        // executed if memory allocation fails
        cout << "p is null!\n";
    }
}