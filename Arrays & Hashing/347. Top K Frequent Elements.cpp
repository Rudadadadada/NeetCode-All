#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
    int n = (int) nums.size();

    std::unordered_map<int, int> d;
    std::vector<std::vector<int>> arr(n);

    for (int &elem: nums) {
        if (d.count(elem) == 0) {
            d[elem] = 0;
        }
        d[elem] += 1;
    }

    for (auto &item: d) {
        arr[n - item.second].push_back(item.first);
    }

    std::vector<int> ans;
    int i = 0;
    while (k > 0) {
        for (int &elem: arr[i]) {
            ans.push_back(elem);
            --k;
        }
        ++i;
    }
    for (int elem: ans)
        std::cout << elem << ' ';
    return ans;
}