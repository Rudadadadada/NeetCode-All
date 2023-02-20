#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int> &nums, int target) {
    std::vector<std::pair<int, int>> number_index;
    std::vector<int> ans;
    for (int i = 0; i < nums.size(); ++i) {
        number_index.emplace_back(nums[i], i);
    }
    std::sort(number_index.begin(), number_index.end());
    for (int i = 0; i < nums.size(); ++i) {
        int l = 0, r = (int) nums.size() - 1;
        while (r - l > 1) {
            int m = (l + r) / 2;
            if (number_index[m].first >= target - nums[i])
                r = m;
            else
                l = m;
        }
        if (nums[i] + number_index[r].first == target)
            if ((i != number_index[r].second)) {
                ans.push_back(i);
                ans.push_back(number_index[r].second);
                break;
            }
    }
    return ans;
}