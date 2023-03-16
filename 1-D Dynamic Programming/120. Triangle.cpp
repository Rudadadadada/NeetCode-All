#include <vector>
#include <algorithm>

int minimumTotal(std::vector<std::vector<int>> &triangle) {
    int n = (int) triangle.size();

    if (n == 1)
        return triangle[0][0];
    if (n == 2)
        return triangle[0][0] + std::min(triangle[1][0], triangle[1][1]);

    triangle[1][0] += triangle[0][0];
    triangle[1][1] += triangle[0][0];

    for (int i = 2; i < n; ++i) {
        triangle[i][0] += triangle[i - 1][0];
        triangle[i][i] += triangle[i - 1][i - 1];
        for (int j = 1; j < (int) triangle[i].size() - 1; ++j) {
            triangle[i][j] += std::min(triangle[i - 1][j - 1], triangle[i - 1][j]);
        }
    }
    return *std::min_element(triangle[n - 1].begin(), triangle[n - 1].end());
}