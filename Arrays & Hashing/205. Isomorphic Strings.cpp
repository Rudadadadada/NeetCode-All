#include <iostream>
#include <unordered_map>
#include <vector>

bool isIsomorphic(std::string s, std::string t) {
    std::unordered_map<char, char> d1;
    std::unordered_map<char, char> d2;
    for (int i = 0; i < s.size(); ++i) {
        char first = s[i], second = t[i];
        if (d1.count(first) == 0)
            d1[first] = second;
        else
            if (d1[first] != second)
                return false;
        if (d2.count(second) == 0)
            d2[second] = first;
        else
            if (d2[second] != first)
                return false;
    }
    return true;
}