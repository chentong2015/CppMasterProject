#include <iostream>

using namespace std;

// CPP支持goto语句跳转到定义的标签
void test_label(int x) {
    if (x == 1){
        goto label1;
    }
    goto label2;

    label1:
    cout << "in label1" << endl;
    return;

    label2:
    cout << "in label2" << endl;
}

int main() {
    test_label(1);  // in label1
    test_label(2);  // in label2
}