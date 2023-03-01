#include <iostream>
#include <vector>


std::vector<int> twoSum(std::vector<int>& numbers, int target) {
    int i = 0, j = (int) numbers.size() - 1;
    while (i < j) {
        if (numbers[i] + numbers[j] == target)
            return {i + 1, j + 1};
        if (numbers[i] + numbers[j] < target)
            ++i;
        else
            --j;
    }
    return {i, j};
}

int main() {
    std::vector<int> a = {3,24,50,79,88,150,345};
    std::vector<int> b;
    b = twoSum(a, 200);
    std::cout << b[0] << ' ' << b[1];
}