#include <vector>

int searchInsert(std::vector<int>& nums, int target) {
    int l = -1, r = (int) nums.size() - 1;
    while (r - l > 1) {
        int m = (r + l) / 2;
        if (nums[m] >= target)
            r = m;
        else
            l = m;
    }
    return r - 1;
}