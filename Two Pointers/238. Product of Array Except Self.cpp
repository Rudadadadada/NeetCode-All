#include <iostream>
#include <vector>

std::vector<int> productExceptSelf(std::vector<int> &nums) {
    int multiple = 1;
    bool multiple_0 = false;
    bool multiple_0_0 = false;
    for (int &i: nums)
        if (i != 0)
            multiple *= i;
        else {
            if (multiple_0)
                multiple_0_0 = true;
            multiple_0 = true;
        }
    std::vector<int> ans;
    for (int &i: nums) {
        if (i == 0) {
            if (!multiple_0_0)
               ans.push_back(multiple);
            else
                ans.push_back(0);
        } else {
            if (multiple_0)
                ans.push_back(0);
            else
                ans.push_back(multiple / i);
        }
    }
    return ans;
}