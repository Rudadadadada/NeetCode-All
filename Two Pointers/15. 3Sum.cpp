#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> threeSum(std::vector<int> &nums) {
    int n = (int) nums.size();

    if (n == 3) {
        return {};
    }

    std::vector<std::vector<int>> ans;
    std::sort(nums.begin(), nums.end());

    for (int cur = 0; cur < n - 2; ++cur) {
        if (cur > 0 && nums[cur] == nums[cur - 1])
            continue;

        int i = cur + 1, j = n - 1;
        while (i < j) {
            int total = nums[i] + nums[j] + nums[cur];
            if (total == 0) {
                ans.push_back({nums[cur], nums[i], nums[j]});
                ++i;
                --j;
                while (nums[i] == nums[i - 1] && i < j)
                    ++i;
                while (nums[j] == nums[j + 1] && i < j)
                    --j;
            }
            if (total > 0)
                --j;
            if (total < 0)
                ++i;
        }
    }
    return ans;
}