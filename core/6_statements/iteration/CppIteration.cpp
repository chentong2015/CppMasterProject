#include <cstdio>
#include <iostream>

using namespace std;

// while 不确定执行次数，而是更具条件来构建
// 重复执行语句，直到表达式计算结果为零
// expression 表达式必须是整型类型、指针类型或可以明确转换为整型或指针类型的类类型
// while (expression) {
//     statement;
//     break、goto或return时，while循环终止
//     continue 将控制转移到while循环的下一次迭代
// }

// do-while 循环将执行一次或多次, 终止条件在每次执行循环后进行
// do {
//    statement;
// }
// while (expression);

// for 语句可构建必须执行指定次数的循环
// for (init-expression; cond-expression; loop-expression) {
//    statement;
// }

int mainTest() {
    int i = 0;
    do {
        printf("\n%d",i++);
    } while (i < 3);

    // The counter variable can be declared in the init-expression.
    for (int i = 0; i < 2; i++ ){
        cout << i;
    }

    // The counter variable can be declared outside the for loop.
    int j;
    for (j = 0; j < 2; j++){
        cout << j;
    }

    // init和loop可以包含以逗号分隔的多个语句
    int i1, j1;
    for (i1 = 5, j1 = 10; i1 + j1 < 20; i1++, j1++) {
        cout << "i1 + j1 = " << (i1 + j1) << '\n';
    }

    // 在loop表达式中可以执行其他的操作
    int k;
    for(k = 0; k < 5; cout << k << '\n', k++){
        ;
    }
    
    return 0;
}
