#include <iostream>
#include <vector>

int calPoints(std::vector<std::string> &operations) {
    std::vector<int> ans;
    for (std::string &elem: operations) {
        if (elem == "C")
            ans.pop_back();
        else if (elem == "D") {
            ans.push_back(ans.back() * 2);
        } else if (elem == "+") {
            int num1 = ans.back();
            ans.pop_back();
            int num2 = ans.back();
            ans.push_back(num1);
            num1 += num2;
            ans.push_back(num1);
        } else
            ans.push_back(std::stoi(elem));
    }
    int total = 0;
    int i = 0;
    int n = (int) ans.size();
    while (i < n) {
        total += ans.back();
        ans.pop_back();
        ++i;
    }
    return total;
}