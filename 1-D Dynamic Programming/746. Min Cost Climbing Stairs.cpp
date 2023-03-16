#include <vector>

int minCostClimbingStairs(std::vector<int> &cost) {
    int n = (int) cost.size();
    for (int i = 2; i < n; ++i)
        cost[i] += std::min(cost[i - 1], cost[i - 2]);
    return std::min(cost[n - 1], cost[n - 2]);
}
