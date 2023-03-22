#include <iostream>
#include <vector>

void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
    int i = 0, j = 0;
    std::vector<int> ans;
    while (i < m || j < n) {
        if (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                ++i;
            } else {
                ans.push_back(nums2[j]);
                ++j;
            }
        } else if (i < m) {
            ans.push_back(nums1[i]);
            ++i;
        }
        else {
            ans.push_back(nums2[j]);
            ++j;
        }
    }
    nums1 = ans;
}