#include <iostream>
#include <vector>

void reverseString(std::vector<char> &s) {
    int i = 0, j = (int) s.size() - 1;
    while (i < j) {
        std::swap(s[i], s[j]);
        ++i;
        --j;
    }
}