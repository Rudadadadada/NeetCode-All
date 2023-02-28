#include <iostream>
#include <vector>

bool isPalindrome(std::string s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j])
            return false;
        ++i;
        --j;
    }
    return true;
}

bool validPalindrome(std::string s) {
    int i = 0, j = (int) s.size() - 1;
    while (i < j) {
        if (s[i] == s[j]) {
            ++i;
            --j;
        }
        else
            return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
    }
    return true;
}