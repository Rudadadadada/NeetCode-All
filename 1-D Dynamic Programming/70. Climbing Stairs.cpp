#include <iostream>
#include <vector>


int climbStairs(int n) {
    std::vector<int> dp = {1, 2};
    for (int i = 0; i < n - 2; ++i) {
        int k = (int) dp.size();
        dp.push_back(dp[k - 1] + dp[k - 2]);
    }
    return dp[n - 1];
}