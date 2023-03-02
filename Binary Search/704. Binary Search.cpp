#include <vector>


int search(std::vector<int> &nums, int target) {
    int l = -1, r = (int) nums.size();
    while (r - l > 1) {
        int m = (r + l) / 2;
        if (nums[m] >= target)
            r = m;
        else
            l = m;
    }
    if (nums[r] == target)
        return r;
    return -1;
}