#include "CommonAlgo.h"

using namespace std;

int main() {
    int nums[5] = {1, 3, 0, 6, 2};
    int second =  CommonAlgo::findSecondLargestValue(nums, 5);
    std::cout << second << std::endl;

    return 0;
}