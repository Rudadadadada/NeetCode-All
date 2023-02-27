#include <iostream>
#include <vector>
#include <unordered_map>

int majorityElement(std::vector<int> &nums) {
    std::unordered_map<int, int> d;
    for (int elem: nums) {
        if (d.count(elem) == 0)
            d[elem] = 0;
        d[elem] += 1;
        if (d[elem] > nums.size() / 2)
            return elem;
    }
    return 0;
}