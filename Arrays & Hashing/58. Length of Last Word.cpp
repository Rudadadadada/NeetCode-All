#include <iostream>

int lengthOfLastWord(std::string s) {
    bool letter = false;
    int count = 0;
    for (int i = (int) s.size(); i > -1; --i) {
        if (letter && s[i] == ' ')
            break;
        if (std::isalpha(s[i])) {
            letter = true;
            ++count;
        }
    }
    return count;
}