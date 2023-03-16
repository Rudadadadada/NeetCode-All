#include <vector>
#include <algorithm>

int lengthOfLIS(std::vector<int> &nums) {
    std::vector<int> arr;
    for (int &elem: nums) {
        if (arr.empty()) {
            arr.push_back(elem);
            continue;
        }
        if (elem > arr.back())
            arr.push_back(elem);
        else if (elem < arr.back()) {
            int elem_above = *std::lower_bound(arr.begin(), arr.end(), elem);
            std::replace(arr.begin(), arr.end(), elem_above, elem);
        }
    }
    return (int) arr.size();
}