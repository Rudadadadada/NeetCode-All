#include <iostream>
#include <vector>

int my_lower_bound(std::vector<int> &nums, int &target) {
    int l = 0, r = (int) nums.size() - 1;
    while (l < r) {
        int m = l + (r - l) / 2;
        if (nums[m] >= target) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    return nums[l] == target ? l : -1;
}

int my_upper_bound(std::vector<int> &nums, int &target) {
    int l = 0, r = (int) nums.size() - 1;
    while (l < r) {
        int m = r - (r - l) / 2;
        if (nums[m] <= target) {
            l = m;
        } else {
            r = m - 1;
        }
    }
    return nums[l] == target ? l : -1;
}


std::vector<int> searchRange(std::vector<int> &nums, int &target) {
    if (!nums.empty())
        return {my_lower_bound(nums, target), my_upper_bound(nums, target)};
    return {-1, -1};
}