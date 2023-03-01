#include <iostream>
#include <vector>


int removeDuplicates(std::vector<int>& nums) {
    int n = (int) nums.size();
    if (n == 1)
        return 1;
    int i = 1;

    while (i < n) {
        if (nums[i - 1] == nums[i]) {
            nums.erase(nums.begin() + i - 1);
            --i;
            --n;
        }
        ++i;
    }
    return (int) nums.size();
}