#include <iostream>
#include <vector>

std::vector<int> sortedSquares(std::vector<int>& nums) {
    if (nums.size() == 1)
        return {nums[0] * nums[0]};
    int i = 0, j = (int) nums.size() - 1;
    std::vector<int> arr;
    while (i <= j) {
        if (std::abs(nums[i]) >= std::abs(nums[j])) {
            arr.push_back(nums[i] * nums[i]);
            ++i;
        }
        else {
            arr.push_back(nums[j] * nums[j]);
            --j;
        }
    }
    std::reverse(arr.begin(), arr.end());
    return arr;
}