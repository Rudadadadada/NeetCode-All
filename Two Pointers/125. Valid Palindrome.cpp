#include <iostream>

bool isPalindrome(std::string s) {
    std::string filtered_str;
    for (char i: s) {
        if (isalpha(i) || isalnum(i))
            filtered_str += (char) tolower(i);
    }
    int i = 0, j = (int) filtered_str.size() - 1;
    while (i < j) {
        if (filtered_str[i] != filtered_str[j])
            return false;
        ++i;
        --j;
    }
    return true;
}