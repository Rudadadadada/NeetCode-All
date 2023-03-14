#include <iostream>
#include <vector>


bool comparator(std::string &a, std::string &b) {
    return a + b > b + a;
}

std::string largestNumber(std::vector<int> &nums) {
    std::vector<std::string> arr;
    for (int &elem: nums)
        arr.push_back(std::to_string(elem));
    std::sort(arr.begin(), arr.end(), comparator);
    std::string ans;
    for (std::string &elem: arr)
        ans += elem;

    if (ans[0] == '0') {
        int i = 1;
        int n = (int) ans.size();
        while (ans[i] == '0' && i < n)
            ++i;
        if (i == n)
            return "0";
        return ans.substr(i, ans.size());
    }
    return ans;
}