#include <iostream>
#include <vector>

int removeElement(std::vector<int> &nums, int val) {
    int count = 0;
    int i = 0;
    while (i < nums.size()) {
        if (nums[i] == val) {
            ++count;
            nums.erase(nums.begin() + i);
            nums.push_back(-1);
            --i;
        }
        ++i;
    }
    return (int) nums.size() - count;
}
