#include <iostream>
#include <vector>

std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> rows;
    rows.push_back({1});
        if (numRows == 1)
            return rows;
        rows.push_back({1, 1});
        if (numRows == 2)
            return rows;
    for (int i = 0; i < numRows - 2; ++i) {
        std::vector<int> back = rows.back();
        std::vector<int> tmp = {1};
        for (int j = 0; j < back.size() - 1; ++j) {
            tmp.push_back(back[j] + back[j + 1]);
        }
        tmp.push_back(1);
        rows.push_back(tmp);
    }
    return rows;
}