#include <iostream>
#include <vector>

int minimumDifference(std::vector<int>& nums, int k) {
    if (nums.size() < k)
        return 0;
    sort(nums.begin(), nums.end());
    int i = 0, j = k - 1, ans = INT_MAX;
    while (j < nums.size()) {
        ans = std::min(nums[j] - nums[i], ans);
        ++i;
        ++j;
    }
    return ans;
}