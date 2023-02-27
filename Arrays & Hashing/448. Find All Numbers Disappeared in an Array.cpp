#include <iostream>
#include <vector>

std::vector<int> findDisappearedNumbers(std::vector<int> nums) {
    int n = std::max(*std::max_element(nums.begin(), nums.end()) + 1, (int) nums.size() + 1);
    std::vector<int> arr(n, false);
    for (int num: nums)
        arr[num] = num;

    std::vector<int> ans;
    for (int i = 1; i < n; ++i)
        if (!arr[i])
            ans.push_back(i);
    return ans;
}