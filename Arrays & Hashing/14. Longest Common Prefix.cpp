#include <iostream>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string> &strs) {
    std::string ans;
    int min_length;
    for (std::string elem: strs) {
        min_length = std::min(min_length, (int) elem.size());
    }
    int j = 0;
    while ((int) ans.size() < min_length) {
        for (int i = 0; i < strs.size() - 1; ++i) {
            if (strs[i][j] != strs[i + 1][j]) {
                return ans;
            }
        }
        ans += strs[0][j];
        ++j;
    }
    return ans;
}
