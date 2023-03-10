#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs) {
    std::unordered_map<std::string, std::vector<std::string>> d;
    for (std::string &str: strs) {
        std::string key = str;
        std::sort(key.begin(), key.end());
        if (d.count(key) == 0)
            d[key] = {};
        d[key].push_back(str);
    }
    std::vector<std::vector<std::string>> ans;
    for (auto &item: d) {
        ans.push_back(d[item.first]);
    }
    return ans;
}