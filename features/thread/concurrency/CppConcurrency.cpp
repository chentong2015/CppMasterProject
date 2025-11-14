#include <iostream>

// TODO. 原子类型保证并发场景下的数据一致性
// Item 40: Use std::atomic for concurrency, volatile for special memory.
int main() {

    std::atomic<int> ai(0); // initialize ai to 0
    ai = 10;  // atomically set ai to 10
    std::cout << ai; // atomically read ai's value
    ++ai;     // atomically increment ai to 11
    --ai;     // atomically decrement ai to 10

    return 0;
}