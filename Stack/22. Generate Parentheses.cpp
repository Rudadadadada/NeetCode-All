#include <iostream>
#include <vector>


void generator(int left, int right, std::string brackets, int n, std::vector<std::string> &arr) {
    if (left + right == 2 * n) {
        arr.push_back(brackets);
        return;
    }
    if (left < n)
        generator(left + 1, right, brackets + '(', n, arr);
    if (right < left)
        generator(left, right + 1, brackets + ')', n, arr);
}

std::vector<std::string> generateParenthesis(int n) {
    std::vector<std::string> arr;
    generator(0, 0, "", n, arr);
    return arr;
}