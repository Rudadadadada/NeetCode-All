#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> nextGreaterElement(std::vector<int> &nums1, std::vector<int> &nums2) {
    std::unordered_map<int, int> d;

    std::vector<int> stack;
    for (int &elem: nums2)
        d[elem] = -1;

    for (int &elem: nums2) {
        if (!stack.empty()) {
            if (elem > stack.back()) {
                int i = stack.back();
                while (i < elem && !stack.empty()) {
                    d[i] = elem;
                    stack.pop_back();
                    i = !stack.empty() ? stack.back() : -1;
                }
            }
        }
        stack.push_back(elem);
    }

    std::vector<int> ans;
    for (int &elem: nums1)
        ans.push_back(d[elem]);
    return ans;
}