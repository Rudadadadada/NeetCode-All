#include <iostream>
#include <unordered_map>

bool isAnagram(std::string s, std::string t) {
    std::unordered_map<char, int> letters;
    for (char c: s) {
        if (letters.find(c) == letters.end())
            letters[c] = 0;
        letters[c] += 1;
    }

    for (char c: t) {
        if (letters.find(c) == letters.end())
            letters[c] = 0;
        letters[c] -= 1;
        if (letters[c] == 0)
            letters.erase(c);
    }

    if (!letters.empty())
        return false;
    return true;
}