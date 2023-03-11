#include <iostream>
#include <vector>

int pivotIndex(std::vector<int>& nums) {
    int n = (int) nums.size();

    for (int i = 1; i < n; ++i)
        nums[i] = nums[i - 1] + nums[i];

    if (nums[n - 1] == nums[0])
        return 0;
    for (int i = 1; i < n; ++i)
        if (nums[i - 1] == nums[n - 1] - nums[i])
            return i;

    return -1;
}

int main(){
    std::vector<int> arr = {2,1,-1};
    std::cout << pivotIndex(arr);
}