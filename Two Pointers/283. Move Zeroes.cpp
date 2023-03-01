#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& nums) {
    int i = 0, n = (int) nums.size();
    while (i < n) {
        if (nums[i] == 0) {
            nums.erase(nums.begin() + i);
            nums.push_back(0);
            --i;
            --n;
        }
        ++i;
    }
}

