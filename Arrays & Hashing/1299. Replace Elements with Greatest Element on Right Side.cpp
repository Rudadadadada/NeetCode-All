#include <algorithm>
#include <vector>

std::vector<int> replaceElements(std::vector<int> &arr) {
    int n = (int) arr.size();
    std::vector<int> suffix(n, arr.back());
    suffix.back() = -1;
    for (int i = n - 2; i > -1; --i) {
        suffix[i] = std::max(arr[i + 1], suffix[i + 1]);
    }
    return suffix;
}