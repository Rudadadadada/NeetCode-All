#include <iostream>
#include <vector>
#include <unordered_map>

int subarraySum(std::vector<int> &nums, int k) {
    std::unordered_map<int, int> d;
    int ans = 0, pref_sum = 0;
    d[pref_sum] = 1;
    for (int &elem: nums) {
        pref_sum += elem;
        if (d.count(pref_sum - k) != 0)
            ans += d[pref_sum - k];
        ++d[pref_sum];
    }
    for (auto &elem: d)
        std::cout << elem.first << ' ' << elem.second << '\n';
    return ans;
}