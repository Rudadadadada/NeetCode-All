#include <iostream>
#include <vector>


std::vector<int> getConcatenation(std::vector<int> &nums) {
    int n = (int) nums.size();
    std::vector<int> arr(2 * n);

    for (int i = 0; i < 2 * n; ++i)
        arr[i] = nums[i % n];

    return arr;
}
