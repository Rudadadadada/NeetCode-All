#include <iostream>
#include <vector>
#include <unordered_map>


bool containsDuplicate(std::vector<int> &nums) {
    std::unordered_map<int, int> counts;
    for (int i: nums) {
        if (counts.find(i) == counts.end())
            counts[i] = 0;
        counts[i] += 1;
    }
    for (auto pair: counts) {
        if (pair.second > 1)
            return true;
    }
    return false;
}