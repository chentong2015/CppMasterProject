#include <iostream>

// TODO. since C++20 新的make_unique方法
// template< class T >
// unique_ptr<T> make_unique_for_overwrite();

int mainTest() {
    // Create a unique_ptr to an uninitialized array of 10 integers
    std::unique_ptr<int[]> i1 = std::make_unique_for_overwrite<int[]>(10);
    
    return 0;
}
