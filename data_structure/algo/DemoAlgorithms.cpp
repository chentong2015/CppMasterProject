#include "CommonAlgo.h"
#include <algorithm>
#include <vector>

using namespace std;

int mainTest() {
    int nums[5] = {1, 3, 0, 6, 2};
    int second =  CommonAlgo::findSecondLargestValue(nums, 5);
    std::cout << second << std::endl;

    vector<int> v1 = { 1, 5, 7, 3, 8, 3 };
    vector<int> v2(6);
    vector<int> v3(6);

    // <algorithm> 算法拷贝方法
    copy(v1.begin(), v1.begin()+3, v2.begin());
    copy_n(v1.begin(), 4, v3.begin());

    copy_if(v1.begin(), v1.end(), v2.begin(), [](int i){return i%2!=0;});

    // using copy_backward() to copy 1st 4 elements ending at second last position
    copy_backward(v1.begin(), v1.begin() + 4, v3.begin()+ 5);

    return 0;
}