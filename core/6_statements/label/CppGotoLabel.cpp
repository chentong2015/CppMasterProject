#include <iostream>

using namespace std;

void test_label(int x) {
    if (x == 1){
        goto label1;
    }
    // 使用goto跳转到指定的标签
    goto label2;

    // 使用冒号(:)将某种标签与语句隔开
    label1:
    cout << "in label1" << endl;
    return;

    label2:
    cout << "in label2" << endl;
}

int mainTest() {
    test_label(1);  // in label1
    test_label(2);  // in label2
    
    return 0;
}
