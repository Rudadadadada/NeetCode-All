#include <iostream>
#include <vector>

class NumArray {
public:
    NumArray(std::vector<int> &nums) : pref_nums(nums) {
        pref_nums[0] = nums[0];
        for (int i = 1; i < pref_nums.size(); ++i)
            pref_nums[i] = pref_nums[i - 1] + pref_nums[i];
    }

    int sumRange(int left, int right) {
        if (!left)
            return pref_nums[right];
        return pref_nums[right] - pref_nums[left - 1];
    }

private:
    std::vector<int> pref_nums;
};