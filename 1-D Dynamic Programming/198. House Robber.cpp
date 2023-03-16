#include <iostream>
#include <vector>

int rob(std::vector<int> &nums) {
    int n = (int) nums.size();
    std::vector<int> arr = {0, 0};
    for (int i = 2; i < n + 2; ++i)
        arr.push_back(std::max(arr[i - 1], arr[i - 2] + nums[i - 2]));
    return arr[n + 1];
}