#include <iostream>

// CPP 四种跳转语句：
// - break 语句
// - continue 语句
// - return 语句
// - goTo 语句
int main() {
    for (int i = 1; i < 10; i++) {
        if (i == 4) {
            break;
        }
        std::cout << i << '\n';
    }

    int j = 2;
    while (j < 10) {
        if (j == 4) {
            break;
        }
        std::cout << j << '\n';
        j++;
    }

    int i = 0;
    do {
        i++;
        printf("before the continue\n");
        continue;
        printf("after the continue, should never print\n");
    } while (i < 3);
}



